// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/AzSpeechSettings.h"
#include "AzSpeech/Structures/AzSpeechPhraseListMap.h"
#include "AzSpeech/Structures/AzSpeechRecognitionMap.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechSettings() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSettings();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSettings_NoRegister();
	AZSPEECH_API UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechPhraseListMap();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionMap();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSettingsOptions();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(UAzSpeechSettings::execSetDefaultOptions)
	{
		P_GET_STRUCT_REF(FAzSpeechSettingsOptions,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzSpeechSettings::SetDefaultOptions(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSettings::execGetDefaultOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzSpeechSettingsOptions*)Z_Param__Result=UAzSpeechSettings::GetDefaultOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSettings::execGetStringDelimiters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAzSpeechSettings::GetStringDelimiters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSettings::execGetRecognitionMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAzSpeechRecognitionMap>*)Z_Param__Result=UAzSpeechSettings::GetRecognitionMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSettings::execGetPhraseListMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAzSpeechPhraseListMap>*)Z_Param__Result=UAzSpeechSettings::GetPhraseListMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSettings::execGetCandidateLanguages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UAzSpeechSettings::GetCandidateLanguages();
		P_NATIVE_END;
	}
	void UAzSpeechSettings::StaticRegisterNativesUAzSpeechSettings()
	{
		UClass* Class = UAzSpeechSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCandidateLanguages", &UAzSpeechSettings::execGetCandidateLanguages },
			{ "GetDefaultOptions", &UAzSpeechSettings::execGetDefaultOptions },
			{ "GetPhraseListMap", &UAzSpeechSettings::execGetPhraseListMap },
			{ "GetRecognitionMap", &UAzSpeechSettings::execGetRecognitionMap },
			{ "GetStringDelimiters", &UAzSpeechSettings::execGetStringDelimiters },
			{ "SetDefaultOptions", &UAzSpeechSettings::execSetDefaultOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics
	{
		struct AzSpeechSettings_eventGetCandidateLanguages_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSettings_eventGetCandidateLanguages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Settings" },
		{ "CompactNodeTitle", "AzSpeech Candidate Languages" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Get Candidate Languages" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSettings, nullptr, "GetCandidateLanguages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::AzSpeechSettings_eventGetCandidateLanguages_Parms), Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics
	{
		struct AzSpeechSettings_eventGetDefaultOptions_Parms
		{
			FAzSpeechSettingsOptions ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSettings_eventGetDefaultOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzSpeechSettingsOptions, METADATA_PARAMS(nullptr, 0) }; // 3721891201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Settings" },
		{ "CompactNodeTitle", "AzSpeech Default Options" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Get Default Options" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSettings, nullptr, "GetDefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::AzSpeechSettings_eventGetDefaultOptions_Parms), Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics
	{
		struct AzSpeechSettings_eventGetPhraseListMap_Parms
		{
			TArray<FAzSpeechPhraseListMap> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechPhraseListMap, METADATA_PARAMS(nullptr, 0) }; // 2102725206
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSettings_eventGetPhraseListMap_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2102725206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Settings" },
		{ "CompactNodeTitle", "AzSpeech Phrase List Map" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Get Phrase List Map" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSettings, nullptr, "GetPhraseListMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::AzSpeechSettings_eventGetPhraseListMap_Parms), Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics
	{
		struct AzSpeechSettings_eventGetRecognitionMap_Parms
		{
			TArray<FAzSpeechRecognitionMap> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechRecognitionMap, METADATA_PARAMS(nullptr, 0) }; // 1725048605
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSettings_eventGetRecognitionMap_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1725048605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Settings" },
		{ "CompactNodeTitle", "AzSpeech Recognition Map" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Get Recognition Map" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSettings, nullptr, "GetRecognitionMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::AzSpeechSettings_eventGetRecognitionMap_Parms), Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics
	{
		struct AzSpeechSettings_eventGetStringDelimiters_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSettings_eventGetStringDelimiters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Settings" },
		{ "CompactNodeTitle", "AzSpeech String Delimiters" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Get String Delimiters" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSettings, nullptr, "GetStringDelimiters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::AzSpeechSettings_eventGetStringDelimiters_Parms), Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics
	{
		struct AzSpeechSettings_eventSetDefaultOptions_Parms
		{
			FAzSpeechSettingsOptions Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSettings_eventSetDefaultOptions_Parms, Value), Z_Construct_UScriptStruct_FAzSpeechSettingsOptions, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::NewProp_Value_MetaData)) }; // 3721891201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Settings" },
		{ "DefaultToSelf", "Self" },
		{ "DisplayName", "Set Default Options" },
		{ "HidePin", "Self" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSettings, nullptr, "SetDefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::AzSpeechSettings_eventSetDefaultOptions_Parms), Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechSettings);
	UClass* Z_Construct_UClass_UAzSpeechSettings_NoRegister()
	{
		return UAzSpeechSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskInitTimeOut_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TaskInitTimeOut;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TasksThreadPriority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TasksThreadPriority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TasksThreadPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreadUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThreadUpdateInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterVisemeFacialExpression_MetaData[];
#endif
		static void NewProp_bFilterVisemeFacialExpression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterVisemeFacialExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSDKLogs_MetaData[];
#endif
		static void NewProp_bEnableSDKLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSDKLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInternalLogs_MetaData[];
#endif
		static void NewProp_bEnableInternalLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInternalLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebuggingLogs_MetaData[];
#endif
		static void NewProp_bEnableDebuggingLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebuggingLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebuggingPrints_MetaData[];
#endif
		static void NewProp_bEnableDebuggingPrints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebuggingPrints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhraseListMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhraseListMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhraseListMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringDelimiters_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StringDelimiters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecognitionMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecognitionMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzSpeechSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzSpeechSettings_GetCandidateLanguages, "GetCandidateLanguages" }, // 1567343228
		{ &Z_Construct_UFunction_UAzSpeechSettings_GetDefaultOptions, "GetDefaultOptions" }, // 2962967090
		{ &Z_Construct_UFunction_UAzSpeechSettings_GetPhraseListMap, "GetPhraseListMap" }, // 1020497258
		{ &Z_Construct_UFunction_UAzSpeechSettings_GetRecognitionMap, "GetRecognitionMap" }, // 3394000539
		{ &Z_Construct_UFunction_UAzSpeechSettings_GetStringDelimiters, "GetStringDelimiters" }, // 747284123
		{ &Z_Construct_UFunction_UAzSpeechSettings_SetDefaultOptions, "SetDefaultOptions" }, // 1922481822
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "AzSpeech" },
		{ "IncludePath", "AzSpeech/AzSpeechSettings.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_DefaultOptions_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "DisplayName", "Default Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_DefaultOptions = { "DefaultOptions", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSettings, DefaultOptions), Z_Construct_UScriptStruct_FAzSpeechSettingsOptions, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_DefaultOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_DefaultOptions_MetaData)) }; // 3721891201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TaskInitTimeOut_MetaData[] = {
		{ "Category", "Thread" },
		{ "ClampMax", "600" },
		{ "ClampMin", "1" },
		{ "Comment", "/* Time Out in seconds to wait for related asynchronous tasks to initialize: std::future::wait_for */" },
		{ "DisplayName", "Task Initialization Time Out in Seconds" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "Time Out in seconds to wait for related asynchronous tasks to initialize: std::future::wait_for" },
		{ "UIMax", "600" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TaskInitTimeOut = { "TaskInitTimeOut", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSettings, TaskInitTimeOut), METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TaskInitTimeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TaskInitTimeOut_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TasksThreadPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TasksThreadPriority_MetaData[] = {
		{ "Category", "Thread" },
		{ "Comment", "/* CPU thread priority to use in created runnable threads */" },
		{ "DisplayName", "Thread Priority" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "CPU thread priority to use in created runnable threads" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TasksThreadPriority = { "TasksThreadPriority", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSettings, TasksThreadPriority), Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TasksThreadPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TasksThreadPriority_MetaData)) }; // 1637187169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_ThreadUpdateInterval_MetaData[] = {
		{ "Category", "Thread" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/* Thread update interval: Sleep time between task update checks */" },
		{ "DisplayName", "Thread Update Interval" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "Thread update interval: Sleep time between task update checks" },
		{ "UIMax", "1" },
		{ "UIMin", "0.0001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_ThreadUpdateInterval = { "ThreadUpdateInterval", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSettings, ThreadUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_ThreadUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_ThreadUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bFilterVisemeFacialExpression_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/* If enabled, SSML synthesizers tasks with viseme output type set to FacialExpression will return only data that contains the Animation property */" },
		{ "DisplayName", "Filter Viseme Facial Expression" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "If enabled, SSML synthesizers tasks with viseme output type set to FacialExpression will return only data that contains the Animation property" },
	};
#endif
	void Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bFilterVisemeFacialExpression_SetBit(void* Obj)
	{
		((UAzSpeechSettings*)Obj)->bFilterVisemeFacialExpression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bFilterVisemeFacialExpression = { "bFilterVisemeFacialExpression", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzSpeechSettings), &Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bFilterVisemeFacialExpression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bFilterVisemeFacialExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bFilterVisemeFacialExpression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableSDKLogs_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/* If enabled, logs will be generated inside Saved/Logs/AzSpeech folder whenever a task fails - Disabled for Android & Shipping builds */" },
		{ "DisplayName", "Enable Azure SDK Logs" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "If enabled, logs will be generated inside Saved/Logs/AzSpeech folder whenever a task fails - Disabled for Android & Shipping builds" },
	};
#endif
	void Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableSDKLogs_SetBit(void* Obj)
	{
		((UAzSpeechSettings*)Obj)->bEnableSDKLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableSDKLogs = { "bEnableSDKLogs", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzSpeechSettings), &Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableSDKLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableSDKLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableSDKLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableInternalLogs_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/* Will print extra internal informations in log */" },
		{ "DisplayName", "Enable Internal Logs" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "Will print extra internal informations in log" },
	};
#endif
	void Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableInternalLogs_SetBit(void* Obj)
	{
		((UAzSpeechSettings*)Obj)->bEnableInternalLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableInternalLogs = { "bEnableInternalLogs", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzSpeechSettings), &Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableInternalLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableInternalLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableInternalLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingLogs_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/* Will print extra debugging informations in log */" },
		{ "DisplayName", "Enable Debugging Logs" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "Will print extra debugging informations in log" },
	};
#endif
	void Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingLogs_SetBit(void* Obj)
	{
		((UAzSpeechSettings*)Obj)->bEnableDebuggingLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingLogs = { "bEnableDebuggingLogs", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzSpeechSettings), &Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingPrints_MetaData[] = {
		{ "Category", "Information" },
		{ "Comment", "/* Will print extra debugging informations in screen */" },
		{ "DisplayName", "Enable Debugging Prints" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "Will print extra debugging informations in screen" },
	};
#endif
	void Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingPrints_SetBit(void* Obj)
	{
		((UAzSpeechSettings*)Obj)->bEnableDebuggingPrints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingPrints = { "bEnableDebuggingPrints", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAzSpeechSettings), &Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingPrints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingPrints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingPrints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_PhraseListMap_Inner = { "PhraseListMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechPhraseListMap, METADATA_PARAMS(nullptr, 0) }; // 2102725206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_PhraseListMap_MetaData[] = {
		{ "Category", "Extras" },
		{ "Comment", "/* Map of Phrase Lists used to improve recognition accuracy */" },
		{ "DisplayName", "Phrase List Map" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "TitleProperty", "Group: {GroupName}" },
		{ "ToolTip", "Map of Phrase Lists used to improve recognition accuracy" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_PhraseListMap = { "PhraseListMap", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSettings, PhraseListMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_PhraseListMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_PhraseListMap_MetaData)) }; // 2102725206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_StringDelimiters_MetaData[] = {
		{ "Category", "Extras" },
		{ "Comment", "/* String delimiters to use in recognition checks */" },
		{ "DisplayName", "String Delimiters" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "ToolTip", "String delimiters to use in recognition checks" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_StringDelimiters = { "StringDelimiters", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSettings, StringDelimiters), METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_StringDelimiters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_StringDelimiters_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_RecognitionMap_Inner = { "RecognitionMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechRecognitionMap, METADATA_PARAMS(nullptr, 0) }; // 1725048605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_RecognitionMap_MetaData[] = {
		{ "Category", "Extras" },
		{ "Comment", "/* Map of keywords to trigger or ignore in recognition interactions: Used by CheckReturnFromRecognitionMap task */" },
		{ "DisplayName", "Recognition Map" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechSettings.h" },
		{ "TitleProperty", "Group: {GroupName}" },
		{ "ToolTip", "Map of keywords to trigger or ignore in recognition interactions: Used by CheckReturnFromRecognitionMap task" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_RecognitionMap = { "RecognitionMap", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSettings, RecognitionMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_RecognitionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_RecognitionMap_MetaData)) }; // 1725048605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzSpeechSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_DefaultOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TaskInitTimeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TasksThreadPriority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_TasksThreadPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_ThreadUpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bFilterVisemeFacialExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableSDKLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableInternalLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_bEnableDebuggingPrints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_PhraseListMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_PhraseListMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_StringDelimiters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_RecognitionMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSettings_Statics::NewProp_RecognitionMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechSettings_Statics::ClassParams = {
		&UAzSpeechSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAzSpeechSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechSettings()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechSettings.OuterSingleton, Z_Construct_UClass_UAzSpeechSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechSettings.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechSettings>()
	{
		return UAzSpeechSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechSettings);
	UAzSpeechSettings::~UAzSpeechSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechSettings, UAzSpeechSettings::StaticClass, TEXT("UAzSpeechSettings"), &Z_Registration_Info_UClass_UAzSpeechSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechSettings), 234531729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_2010951983(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
