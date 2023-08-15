// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/TextToSpeechAsync.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextToSpeechAsync() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSpeechSynthesisBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UTextToSpeechAsync();
	AZSPEECH_API UClass* Z_Construct_UClass_UTextToSpeechAsync_NoRegister();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(UTextToSpeechAsync::execTextToSpeech_CustomOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FAzSpeechSubscriptionOptions,Z_Param_SubscriptionOptions);
		P_GET_STRUCT(FAzSpeechSynthesisOptions,Z_Param_SynthesisOptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_SynthesisText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextToSpeechAsync**)Z_Param__Result=UTextToSpeechAsync::TextToSpeech_CustomOptions(Z_Param_WorldContextObject,Z_Param_SubscriptionOptions,Z_Param_SynthesisOptions,Z_Param_SynthesisText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechAsync::execTextToSpeech_DefaultOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SynthesisText);
		P_GET_PROPERTY(FStrProperty,Z_Param_Voice);
		P_GET_PROPERTY(FStrProperty,Z_Param_Locale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextToSpeechAsync**)Z_Param__Result=UTextToSpeechAsync::TextToSpeech_DefaultOptions(Z_Param_WorldContextObject,Z_Param_SynthesisText,Z_Param_Voice,Z_Param_Locale);
		P_NATIVE_END;
	}
	void UTextToSpeechAsync::StaticRegisterNativesUTextToSpeechAsync()
	{
		UClass* Class = UTextToSpeechAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TextToSpeech_CustomOptions", &UTextToSpeechAsync::execTextToSpeech_CustomOptions },
			{ "TextToSpeech_DefaultOptions", &UTextToSpeechAsync::execTextToSpeech_DefaultOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics
	{
		struct TextToSpeechAsync_eventTextToSpeech_CustomOptions_Parms
		{
			UObject* WorldContextObject;
			FAzSpeechSubscriptionOptions SubscriptionOptions;
			FAzSpeechSynthesisOptions SynthesisOptions;
			FString SynthesisText;
			UTextToSpeechAsync* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SubscriptionOptions = { "SubscriptionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_CustomOptions_Parms, SubscriptionOptions), Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData)) }; // 3252570412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisOptions = { "SynthesisOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_CustomOptions_Parms, SynthesisOptions), Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData)) }; // 2909106233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisText = { "SynthesisText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_CustomOptions_Parms, SynthesisText), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisText_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_UTextToSpeechAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SubscriptionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_SynthesisText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Custom" },
		{ "Comment", "/* Creates a Text-To-Speech task that will convert your text to speech */" },
		{ "DisplayName", "Text To Speech with Custom Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToSpeechAsync.h" },
		{ "ToolTip", "Creates a Text-To-Speech task that will convert your text to speech" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechAsync, nullptr, "TextToSpeech_CustomOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::TextToSpeechAsync_eventTextToSpeech_CustomOptions_Parms), Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics
	{
		struct TextToSpeechAsync_eventTextToSpeech_DefaultOptions_Parms
		{
			UObject* WorldContextObject;
			FString SynthesisText;
			FString Voice;
			FString Locale;
			UTextToSpeechAsync* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_SynthesisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_SynthesisText = { "SynthesisText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_DefaultOptions_Parms, SynthesisText), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_SynthesisText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_SynthesisText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Voice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_DefaultOptions_Parms, Voice), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Voice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Voice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Locale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_DefaultOptions_Parms, Locale), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Locale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechAsync_eventTextToSpeech_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_UTextToSpeechAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_SynthesisText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Voice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Default" },
		{ "Comment", "/* Creates a Text-To-Speech task that will convert your text to speech */" },
		{ "CPP_Default_Locale", "Default" },
		{ "CPP_Default_Voice", "Default" },
		{ "DisplayName", "Text To Speech with Default Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToSpeechAsync.h" },
		{ "ToolTip", "Creates a Text-To-Speech task that will convert your text to speech" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechAsync, nullptr, "TextToSpeech_DefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::TextToSpeechAsync_eventTextToSpeech_DefaultOptions_Parms), Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextToSpeechAsync);
	UClass* Z_Construct_UClass_UTextToSpeechAsync_NoRegister()
	{
		return UTextToSpeechAsync::StaticClass();
	}
	struct Z_Construct_UClass_UTextToSpeechAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextToSpeechAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechSpeechSynthesisBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextToSpeechAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_CustomOptions, "TextToSpeech_CustomOptions" }, // 221026809
		{ &Z_Construct_UFunction_UTextToSpeechAsync_TextToSpeech_DefaultOptions, "TextToSpeech_DefaultOptions" }, // 331696195
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextToSpeechAsync_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/TextToSpeechAsync.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToSpeechAsync.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextToSpeechAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextToSpeechAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextToSpeechAsync_Statics::ClassParams = {
		&UTextToSpeechAsync::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextToSpeechAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextToSpeechAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextToSpeechAsync()
	{
		if (!Z_Registration_Info_UClass_UTextToSpeechAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextToSpeechAsync.OuterSingleton, Z_Construct_UClass_UTextToSpeechAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextToSpeechAsync.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UTextToSpeechAsync>()
	{
		return UTextToSpeechAsync::StaticClass();
	}
	UTextToSpeechAsync::UTextToSpeechAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextToSpeechAsync);
	UTextToSpeechAsync::~UTextToSpeechAsync() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToSpeechAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToSpeechAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextToSpeechAsync, UTextToSpeechAsync::StaticClass, TEXT("UTextToSpeechAsync"), &Z_Registration_Info_UClass_UTextToSpeechAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextToSpeechAsync), 4167488396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToSpeechAsync_h_1440522167(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToSpeechAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToSpeechAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
