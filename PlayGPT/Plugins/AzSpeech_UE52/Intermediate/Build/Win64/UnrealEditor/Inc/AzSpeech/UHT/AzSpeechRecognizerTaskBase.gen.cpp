// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechRecognizerTaskBase() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechRecognizerTaskBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechRecognizerTaskBase_NoRegister();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechTaskBase();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AzSpeech_eventRecognitionUpdatedDelegate_Parms
		{
			FString UpdatedString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UpdatedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedString = { "UpdatedString", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AzSpeech_eventRecognitionUpdatedDelegate_Parms, UpdatedString), METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "RecognitionUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::_Script_AzSpeech_eventRecognitionUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRecognitionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RecognitionUpdatedDelegate, const FString& UpdatedString)
{
	struct _Script_AzSpeech_eventRecognitionUpdatedDelegate_Parms
	{
		FString UpdatedString;
	};
	_Script_AzSpeech_eventRecognitionUpdatedDelegate_Parms Parms;
	Parms.UpdatedString=UpdatedString;
	RecognitionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics
	{
		struct _Script_AzSpeech_eventRecognitionCompletedDelegate_Parms
		{
			FString FinalString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FinalString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::NewProp_FinalString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::NewProp_FinalString = { "FinalString", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AzSpeech_eventRecognitionCompletedDelegate_Parms, FinalString), METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::NewProp_FinalString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::NewProp_FinalString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::NewProp_FinalString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "RecognitionCompletedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::_Script_AzSpeech_eventRecognitionCompletedDelegate_Parms), Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRecognitionCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RecognitionCompletedDelegate, const FString& FinalString)
{
	struct _Script_AzSpeech_eventRecognitionCompletedDelegate_Parms
	{
		FString FinalString;
	};
	_Script_AzSpeech_eventRecognitionCompletedDelegate_Parms Parms;
	Parms.FinalString=FinalString;
	RecognitionCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAzSpeechRecognizerTaskBase::execGetRecognitionLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRecognitionLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechRecognizerTaskBase::execGetRecognitionDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetRecognitionDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechRecognizerTaskBase::execGetRecognizedString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRecognizedString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechRecognizerTaskBase::execGetRecognitionOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzSpeechRecognitionOptions*)Z_Param__Result=P_THIS->GetRecognitionOptions();
		P_NATIVE_END;
	}
	void UAzSpeechRecognizerTaskBase::StaticRegisterNativesUAzSpeechRecognizerTaskBase()
	{
		UClass* Class = UAzSpeechRecognizerTaskBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRecognitionDuration", &UAzSpeechRecognizerTaskBase::execGetRecognitionDuration },
			{ "GetRecognitionLatency", &UAzSpeechRecognizerTaskBase::execGetRecognitionLatency },
			{ "GetRecognitionOptions", &UAzSpeechRecognizerTaskBase::execGetRecognitionOptions },
			{ "GetRecognizedString", &UAzSpeechRecognizerTaskBase::execGetRecognizedString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics
	{
		struct AzSpeechRecognizerTaskBase_eventGetRecognitionDuration_Parms
		{
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechRecognizerTaskBase_eventGetRecognitionDuration_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Get Recognition Duration in Milliseconds */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
		{ "ToolTip", "Get Recognition Duration in Milliseconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechRecognizerTaskBase, nullptr, "GetRecognitionDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::AzSpeechRecognizerTaskBase_eventGetRecognitionDuration_Parms), Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics
	{
		struct AzSpeechRecognizerTaskBase_eventGetRecognitionLatency_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechRecognizerTaskBase_eventGetRecognitionLatency_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechRecognizerTaskBase, nullptr, "GetRecognitionLatency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::AzSpeechRecognizerTaskBase_eventGetRecognitionLatency_Parms), Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics
	{
		struct AzSpeechRecognizerTaskBase_eventGetRecognitionOptions_Parms
		{
			FAzSpeechRecognitionOptions ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechRecognizerTaskBase_eventGetRecognitionOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::NewProp_ReturnValue_MetaData)) }; // 1382201151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechRecognizerTaskBase, nullptr, "GetRecognitionOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::AzSpeechRecognizerTaskBase_eventGetRecognitionOptions_Parms), Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics
	{
		struct AzSpeechRecognizerTaskBase_eventGetRecognizedString_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechRecognizerTaskBase_eventGetRecognizedString_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechRecognizerTaskBase, nullptr, "GetRecognizedString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::AzSpeechRecognizerTaskBase_eventGetRecognizedString_Parms), Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechRecognizerTaskBase);
	UClass* Z_Construct_UClass_UAzSpeechRecognizerTaskBase_NoRegister()
	{
		return UAzSpeechRecognizerTaskBase::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RecognitionCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RecognitionUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RecognitionStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RecognitionFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionDuration, "GetRecognitionDuration" }, // 3481237181
		{ &Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionLatency, "GetRecognitionLatency" }, // 519171191
		{ &Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognitionOptions, "GetRecognitionOptions" }, // 2322445864
		{ &Z_Construct_UFunction_UAzSpeechRecognizerTaskBase_GetRecognizedString, "GetRecognizedString" }, // 1006182547
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionCompleted_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when completed */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
		{ "ToolTip", "Task delegate that will be called when completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionCompleted = { "RecognitionCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechRecognizerTaskBase, RecognitionCompleted), Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionCompleted_MetaData)) }; // 4224078169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionUpdated_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when dpdated */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
		{ "ToolTip", "Task delegate that will be called when dpdated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionUpdated = { "RecognitionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechRecognizerTaskBase, RecognitionUpdated), Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionUpdated_MetaData)) }; // 4291974337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionStarted_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when started */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
		{ "ToolTip", "Task delegate that will be called when started" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionStarted = { "RecognitionStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechRecognizerTaskBase, RecognitionStarted), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionStarted_MetaData)) }; // 1641395887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionFailed_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when failed */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h" },
		{ "ToolTip", "Task delegate that will be called when failed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionFailed = { "RecognitionFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechRecognizerTaskBase, RecognitionFailed), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionFailed_MetaData)) }; // 1641395887
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::NewProp_RecognitionFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechRecognizerTaskBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::ClassParams = {
		&UAzSpeechRecognizerTaskBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::PropPointers),
		0,
		0x009002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechRecognizerTaskBase()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechRecognizerTaskBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechRecognizerTaskBase.OuterSingleton, Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechRecognizerTaskBase.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechRecognizerTaskBase>()
	{
		return UAzSpeechRecognizerTaskBase::StaticClass();
	}
	UAzSpeechRecognizerTaskBase::UAzSpeechRecognizerTaskBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechRecognizerTaskBase);
	UAzSpeechRecognizerTaskBase::~UAzSpeechRecognizerTaskBase() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechRecognizerTaskBase, UAzSpeechRecognizerTaskBase::StaticClass, TEXT("UAzSpeechRecognizerTaskBase"), &Z_Registration_Info_UClass_UAzSpeechRecognizerTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechRecognizerTaskBase), 2022946310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_2512460384(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
