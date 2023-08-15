// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/TextToAudioDataAsync.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextToAudioDataAsync() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UTextToAudioDataAsync();
	AZSPEECH_API UClass* Z_Construct_UClass_UTextToAudioDataAsync_NoRegister();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(UTextToAudioDataAsync::execTextToAudioData_CustomOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FAzSpeechSubscriptionOptions,Z_Param_SubscriptionOptions);
		P_GET_STRUCT(FAzSpeechSynthesisOptions,Z_Param_SynthesisOptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_SynthesisText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextToAudioDataAsync**)Z_Param__Result=UTextToAudioDataAsync::TextToAudioData_CustomOptions(Z_Param_WorldContextObject,Z_Param_SubscriptionOptions,Z_Param_SynthesisOptions,Z_Param_SynthesisText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToAudioDataAsync::execTextToAudioData_DefaultOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SynthesisText);
		P_GET_PROPERTY(FStrProperty,Z_Param_Voice);
		P_GET_PROPERTY(FStrProperty,Z_Param_Locale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextToAudioDataAsync**)Z_Param__Result=UTextToAudioDataAsync::TextToAudioData_DefaultOptions(Z_Param_WorldContextObject,Z_Param_SynthesisText,Z_Param_Voice,Z_Param_Locale);
		P_NATIVE_END;
	}
	void UTextToAudioDataAsync::StaticRegisterNativesUTextToAudioDataAsync()
	{
		UClass* Class = UTextToAudioDataAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TextToAudioData_CustomOptions", &UTextToAudioDataAsync::execTextToAudioData_CustomOptions },
			{ "TextToAudioData_DefaultOptions", &UTextToAudioDataAsync::execTextToAudioData_DefaultOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics
	{
		struct TextToAudioDataAsync_eventTextToAudioData_CustomOptions_Parms
		{
			UObject* WorldContextObject;
			FAzSpeechSubscriptionOptions SubscriptionOptions;
			FAzSpeechSynthesisOptions SynthesisOptions;
			FString SynthesisText;
			UTextToAudioDataAsync* ReturnValue;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SubscriptionOptions = { "SubscriptionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_CustomOptions_Parms, SubscriptionOptions), Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData)) }; // 3252570412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisOptions = { "SynthesisOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_CustomOptions_Parms, SynthesisOptions), Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions, METADATA_PARAMS(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData)) }; // 2909106233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisText = { "SynthesisText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_CustomOptions_Parms, SynthesisText), METADATA_PARAMS(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisText_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_UTextToAudioDataAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SubscriptionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_SynthesisText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Custom" },
		{ "Comment", "/* Creates a Text-To-AudioData task that will convert your text to a audio data stream */" },
		{ "DisplayName", "Text To Audio Data with Custom Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToAudioDataAsync.h" },
		{ "ToolTip", "Creates a Text-To-AudioData task that will convert your text to a audio data stream" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToAudioDataAsync, nullptr, "TextToAudioData_CustomOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::TextToAudioDataAsync_eventTextToAudioData_CustomOptions_Parms), Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics
	{
		struct TextToAudioDataAsync_eventTextToAudioData_DefaultOptions_Parms
		{
			UObject* WorldContextObject;
			FString SynthesisText;
			FString Voice;
			FString Locale;
			UTextToAudioDataAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SynthesisText;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_SynthesisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_SynthesisText = { "SynthesisText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_DefaultOptions_Parms, SynthesisText), METADATA_PARAMS(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_SynthesisText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_SynthesisText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Voice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_DefaultOptions_Parms, Voice), METADATA_PARAMS(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Voice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Voice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Locale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_DefaultOptions_Parms, Locale), METADATA_PARAMS(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Locale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToAudioDataAsync_eventTextToAudioData_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_UTextToAudioDataAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_SynthesisText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Voice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Default" },
		{ "Comment", "/* Creates a Text-To-AudioData task that will convert your text to a audio data stream */" },
		{ "CPP_Default_Locale", "Default" },
		{ "CPP_Default_Voice", "Default" },
		{ "DisplayName", "Text To Audio Data with Default Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToAudioDataAsync.h" },
		{ "ToolTip", "Creates a Text-To-AudioData task that will convert your text to a audio data stream" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToAudioDataAsync, nullptr, "TextToAudioData_DefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::TextToAudioDataAsync_eventTextToAudioData_DefaultOptions_Parms), Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextToAudioDataAsync);
	UClass* Z_Construct_UClass_UTextToAudioDataAsync_NoRegister()
	{
		return UTextToAudioDataAsync::StaticClass();
	}
	struct Z_Construct_UClass_UTextToAudioDataAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SynthesisCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextToAudioDataAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextToAudioDataAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_CustomOptions, "TextToAudioData_CustomOptions" }, // 1277581646
		{ &Z_Construct_UFunction_UTextToAudioDataAsync_TextToAudioData_DefaultOptions, "TextToAudioData_DefaultOptions" }, // 526826682
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextToAudioDataAsync_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/TextToAudioDataAsync.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToAudioDataAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextToAudioDataAsync_Statics::NewProp_SynthesisCompleted_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when completed */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToAudioDataAsync.h" },
		{ "ToolTip", "Task delegate that will be called when completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTextToAudioDataAsync_Statics::NewProp_SynthesisCompleted = { "SynthesisCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextToAudioDataAsync, SynthesisCompleted), Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTextToAudioDataAsync_Statics::NewProp_SynthesisCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextToAudioDataAsync_Statics::NewProp_SynthesisCompleted_MetaData)) }; // 1549896625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextToAudioDataAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextToAudioDataAsync_Statics::NewProp_SynthesisCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextToAudioDataAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextToAudioDataAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextToAudioDataAsync_Statics::ClassParams = {
		&UTextToAudioDataAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextToAudioDataAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextToAudioDataAsync_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextToAudioDataAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextToAudioDataAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextToAudioDataAsync()
	{
		if (!Z_Registration_Info_UClass_UTextToAudioDataAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextToAudioDataAsync.OuterSingleton, Z_Construct_UClass_UTextToAudioDataAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextToAudioDataAsync.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UTextToAudioDataAsync>()
	{
		return UTextToAudioDataAsync::StaticClass();
	}
	UTextToAudioDataAsync::UTextToAudioDataAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextToAudioDataAsync);
	UTextToAudioDataAsync::~UTextToAudioDataAsync() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextToAudioDataAsync, UTextToAudioDataAsync::StaticClass, TEXT("UTextToAudioDataAsync"), &Z_Registration_Info_UClass_UTextToAudioDataAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextToAudioDataAsync), 3592152079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_3723862798(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
