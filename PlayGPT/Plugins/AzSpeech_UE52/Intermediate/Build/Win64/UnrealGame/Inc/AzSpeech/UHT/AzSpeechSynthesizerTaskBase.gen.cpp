// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h"
#include "AzSpeech/Structures/AzSpeechAnimationData.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
#include "AzSpeech/Structures/AzSpeechVisemeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechSynthesizerTaskBase() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSynthesizerTaskBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_NoRegister();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechTaskBase();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechAnimationData();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechVisemeData();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics
	{
		struct _Script_AzSpeech_eventVisemeReceived_Parms
		{
			FAzSpeechVisemeData VisemeData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisemeData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisemeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::NewProp_VisemeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::NewProp_VisemeData = { "VisemeData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AzSpeech_eventVisemeReceived_Parms, VisemeData), Z_Construct_UScriptStruct_FAzSpeechVisemeData, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::NewProp_VisemeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::NewProp_VisemeData_MetaData)) }; // 3839445482
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::NewProp_VisemeData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "VisemeReceived__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::_Script_AzSpeech_eventVisemeReceived_Parms), Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVisemeReceived_DelegateWrapper(const FMulticastScriptDelegate& VisemeReceived, const FAzSpeechVisemeData VisemeData)
{
	struct _Script_AzSpeech_eventVisemeReceived_Parms
	{
		FAzSpeechVisemeData VisemeData;
	};
	_Script_AzSpeech_eventVisemeReceived_Parms Parms;
	Parms.VisemeData=VisemeData;
	VisemeReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics
	{
		struct _Script_AzSpeech_eventAudioDataSynthesisDelegate_Parms
		{
			TArray<uint8> FinalAudioData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinalAudioData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalAudioData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FinalAudioData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::NewProp_FinalAudioData_Inner = { "FinalAudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::NewProp_FinalAudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::NewProp_FinalAudioData = { "FinalAudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AzSpeech_eventAudioDataSynthesisDelegate_Parms, FinalAudioData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::NewProp_FinalAudioData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::NewProp_FinalAudioData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::NewProp_FinalAudioData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::NewProp_FinalAudioData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "AudioDataSynthesisDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::_Script_AzSpeech_eventAudioDataSynthesisDelegate_Parms), Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAudioDataSynthesisDelegate_DelegateWrapper(const FMulticastScriptDelegate& AudioDataSynthesisDelegate, TArray<uint8> const& FinalAudioData)
{
	struct _Script_AzSpeech_eventAudioDataSynthesisDelegate_Parms
	{
		TArray<uint8> FinalAudioData;
	};
	_Script_AzSpeech_eventAudioDataSynthesisDelegate_Parms Parms;
	Parms.FinalAudioData=FinalAudioData;
	AudioDataSynthesisDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics
	{
		struct _Script_AzSpeech_eventSoundWaveSynthesisDelegate_Parms
		{
			USoundWave* GeneratedSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::NewProp_GeneratedSound = { "GeneratedSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AzSpeech_eventSoundWaveSynthesisDelegate_Parms, GeneratedSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::NewProp_GeneratedSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "SoundWaveSynthesisDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::_Script_AzSpeech_eventSoundWaveSynthesisDelegate_Parms), Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSoundWaveSynthesisDelegate_DelegateWrapper(const FMulticastScriptDelegate& SoundWaveSynthesisDelegate, USoundWave* GeneratedSound)
{
	struct _Script_AzSpeech_eventSoundWaveSynthesisDelegate_Parms
	{
		USoundWave* GeneratedSound;
	};
	_Script_AzSpeech_eventSoundWaveSynthesisDelegate_Parms Parms;
	Parms.GeneratedSound=GeneratedSound;
	SoundWaveSynthesisDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics
	{
		struct _Script_AzSpeech_eventBooleanSynthesisDelegate_Parms
		{
			bool bSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_AzSpeech_eventBooleanSynthesisDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_AzSpeech_eventBooleanSynthesisDelegate_Parms), &Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::NewProp_bSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "BooleanSynthesisDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::_Script_AzSpeech_eventBooleanSynthesisDelegate_Parms), Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBooleanSynthesisDelegate_DelegateWrapper(const FMulticastScriptDelegate& BooleanSynthesisDelegate, bool bSuccess)
{
	struct _Script_AzSpeech_eventBooleanSynthesisDelegate_Parms
	{
		bool bSuccess;
	};
	_Script_AzSpeech_eventBooleanSynthesisDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	BooleanSynthesisDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetServiceLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetServiceLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetNetworkLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNetworkLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetFirstByteLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFirstByteLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetFinishLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFinishLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetConnectionLatency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetConnectionLatency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetAudioDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetAudioDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execIsSSMLBased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSSMLBased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetSynthesisOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzSpeechSynthesisOptions*)Z_Param__Result=P_THIS->GetSynthesisOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetSynthesisText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSynthesisText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execIsLastResultValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLastResultValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetExtractedAnimationDataArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAzSpeechAnimationData>*)Z_Param__Result=P_THIS->GetExtractedAnimationDataArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetLastExtractedAnimationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzSpeechAnimationData*)Z_Param__Result=P_THIS->GetLastExtractedAnimationData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetAudioData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetAudioData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetVisemeDataArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAzSpeechVisemeData>*)Z_Param__Result=P_THIS->GetVisemeDataArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechSynthesizerTaskBase::execGetLastVisemeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzSpeechVisemeData*)Z_Param__Result=P_THIS->GetLastVisemeData();
		P_NATIVE_END;
	}
	void UAzSpeechSynthesizerTaskBase::StaticRegisterNativesUAzSpeechSynthesizerTaskBase()
	{
		UClass* Class = UAzSpeechSynthesizerTaskBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioData", &UAzSpeechSynthesizerTaskBase::execGetAudioData },
			{ "GetAudioDuration", &UAzSpeechSynthesizerTaskBase::execGetAudioDuration },
			{ "GetConnectionLatency", &UAzSpeechSynthesizerTaskBase::execGetConnectionLatency },
			{ "GetExtractedAnimationDataArray", &UAzSpeechSynthesizerTaskBase::execGetExtractedAnimationDataArray },
			{ "GetFinishLatency", &UAzSpeechSynthesizerTaskBase::execGetFinishLatency },
			{ "GetFirstByteLatency", &UAzSpeechSynthesizerTaskBase::execGetFirstByteLatency },
			{ "GetLastExtractedAnimationData", &UAzSpeechSynthesizerTaskBase::execGetLastExtractedAnimationData },
			{ "GetLastVisemeData", &UAzSpeechSynthesizerTaskBase::execGetLastVisemeData },
			{ "GetNetworkLatency", &UAzSpeechSynthesizerTaskBase::execGetNetworkLatency },
			{ "GetServiceLatency", &UAzSpeechSynthesizerTaskBase::execGetServiceLatency },
			{ "GetSynthesisOptions", &UAzSpeechSynthesizerTaskBase::execGetSynthesisOptions },
			{ "GetSynthesisText", &UAzSpeechSynthesizerTaskBase::execGetSynthesisText },
			{ "GetVisemeDataArray", &UAzSpeechSynthesizerTaskBase::execGetVisemeDataArray },
			{ "IsLastResultValid", &UAzSpeechSynthesizerTaskBase::execIsLastResultValid },
			{ "IsSSMLBased", &UAzSpeechSynthesizerTaskBase::execIsSSMLBased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetAudioData_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetAudioData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetAudioData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::AzSpeechSynthesizerTaskBase_eventGetAudioData_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetAudioDuration_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetAudioDuration_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Get Audio Duration in Milliseconds */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
		{ "ToolTip", "Get Audio Duration in Milliseconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetAudioDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::AzSpeechSynthesizerTaskBase_eventGetAudioDuration_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetConnectionLatency_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetConnectionLatency_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetConnectionLatency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::AzSpeechSynthesizerTaskBase_eventGetConnectionLatency_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetExtractedAnimationDataArray_Parms
		{
			TArray<FAzSpeechAnimationData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechAnimationData, METADATA_PARAMS(nullptr, 0) }; // 911539369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetExtractedAnimationDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::NewProp_ReturnValue_MetaData)) }; // 911539369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetExtractedAnimationDataArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::AzSpeechSynthesizerTaskBase_eventGetExtractedAnimationDataArray_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetFinishLatency_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetFinishLatency_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetFinishLatency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::AzSpeechSynthesizerTaskBase_eventGetFinishLatency_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetFirstByteLatency_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetFirstByteLatency_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetFirstByteLatency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::AzSpeechSynthesizerTaskBase_eventGetFirstByteLatency_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetLastExtractedAnimationData_Parms
		{
			FAzSpeechAnimationData ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetLastExtractedAnimationData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzSpeechAnimationData, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::NewProp_ReturnValue_MetaData)) }; // 911539369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Get the extracted animation data from the last viseme data received by this task */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
		{ "ToolTip", "Get the extracted animation data from the last viseme data received by this task" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetLastExtractedAnimationData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::AzSpeechSynthesizerTaskBase_eventGetLastExtractedAnimationData_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetLastVisemeData_Parms
		{
			FAzSpeechVisemeData ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetLastVisemeData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzSpeechVisemeData, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::NewProp_ReturnValue_MetaData)) }; // 3839445482
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Get the last viseme data received by this task */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
		{ "ToolTip", "Get the last viseme data received by this task" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetLastVisemeData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::AzSpeechSynthesizerTaskBase_eventGetLastVisemeData_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetNetworkLatency_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetNetworkLatency_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetNetworkLatency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::AzSpeechSynthesizerTaskBase_eventGetNetworkLatency_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetServiceLatency_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetServiceLatency_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetServiceLatency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::AzSpeechSynthesizerTaskBase_eventGetServiceLatency_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetSynthesisOptions_Parms
		{
			FAzSpeechSynthesisOptions ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetSynthesisOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::NewProp_ReturnValue_MetaData)) }; // 2909106233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetSynthesisOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::AzSpeechSynthesizerTaskBase_eventGetSynthesisOptions_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetSynthesisText_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetSynthesisText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetSynthesisText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::AzSpeechSynthesizerTaskBase_eventGetSynthesisText_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventGetVisemeDataArray_Parms
		{
			TArray<FAzSpeechVisemeData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechVisemeData, METADATA_PARAMS(nullptr, 0) }; // 3839445482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSynthesizerTaskBase_eventGetVisemeDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::NewProp_ReturnValue_MetaData)) }; // 3839445482
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "GetVisemeDataArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::AzSpeechSynthesizerTaskBase_eventGetVisemeDataArray_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventIsLastResultValid_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechSynthesizerTaskBase_eventIsLastResultValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechSynthesizerTaskBase_eventIsLastResultValid_Parms), &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "IsLastResultValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::AzSpeechSynthesizerTaskBase_eventIsLastResultValid_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics
	{
		struct AzSpeechSynthesizerTaskBase_eventIsSSMLBased_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechSynthesizerTaskBase_eventIsSSMLBased_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechSynthesizerTaskBase_eventIsSSMLBased_Parms), &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "DisplayName", "Is SSML Based" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, nullptr, "IsSSMLBased", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::AzSpeechSynthesizerTaskBase_eventIsSSMLBased_Parms), Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechSynthesizerTaskBase);
	UClass* Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_NoRegister()
	{
		return UAzSpeechSynthesizerTaskBase::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SynthesisUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SynthesisStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SynthesisFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisemeReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VisemeReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioData, "GetAudioData" }, // 2347727855
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetAudioDuration, "GetAudioDuration" }, // 3329742085
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetConnectionLatency, "GetConnectionLatency" }, // 1278194811
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetExtractedAnimationDataArray, "GetExtractedAnimationDataArray" }, // 992323068
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFinishLatency, "GetFinishLatency" }, // 2611559309
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetFirstByteLatency, "GetFirstByteLatency" }, // 1508765174
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastExtractedAnimationData, "GetLastExtractedAnimationData" }, // 2780906210
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetLastVisemeData, "GetLastVisemeData" }, // 2791344278
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetNetworkLatency, "GetNetworkLatency" }, // 2110384917
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetServiceLatency, "GetServiceLatency" }, // 3865867465
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisOptions, "GetSynthesisOptions" }, // 3185008367
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetSynthesisText, "GetSynthesisText" }, // 3573501565
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_GetVisemeDataArray, "GetVisemeDataArray" }, // 2404066985
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsLastResultValid, "IsLastResultValid" }, // 459108566
		{ &Z_Construct_UFunction_UAzSpeechSynthesizerTaskBase_IsSSMLBased, "IsSSMLBased" }, // 842822870
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisUpdated_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when dpdated */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
		{ "ToolTip", "Task delegate that will be called when dpdated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisUpdated = { "SynthesisUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSynthesizerTaskBase, SynthesisUpdated), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisUpdated_MetaData)) }; // 1641395887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisStarted_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when started */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
		{ "ToolTip", "Task delegate that will be called when started" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisStarted = { "SynthesisStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSynthesizerTaskBase, SynthesisStarted), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisStarted_MetaData)) }; // 1641395887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisFailed_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when failed */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
		{ "ToolTip", "Task delegate that will be called when failed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisFailed = { "SynthesisFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSynthesizerTaskBase, SynthesisFailed), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisFailed_MetaData)) }; // 1641395887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_VisemeReceived_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when receive a new viseme data */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h" },
		{ "ToolTip", "Task delegate that will be called when receive a new viseme data" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_VisemeReceived = { "VisemeReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSynthesizerTaskBase, VisemeReceived), Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_VisemeReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_VisemeReceived_MetaData)) }; // 3100387803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_SynthesisFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::NewProp_VisemeReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechSynthesizerTaskBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::ClassParams = {
		&UAzSpeechSynthesizerTaskBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::PropPointers),
		0,
		0x009002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechSynthesizerTaskBase()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechSynthesizerTaskBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechSynthesizerTaskBase.OuterSingleton, Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechSynthesizerTaskBase.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechSynthesizerTaskBase>()
	{
		return UAzSpeechSynthesizerTaskBase::StaticClass();
	}
	UAzSpeechSynthesizerTaskBase::UAzSpeechSynthesizerTaskBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechSynthesizerTaskBase);
	UAzSpeechSynthesizerTaskBase::~UAzSpeechSynthesizerTaskBase() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechSynthesizerTaskBase, UAzSpeechSynthesizerTaskBase::StaticClass, TEXT("UAzSpeechSynthesizerTaskBase"), &Z_Registration_Info_UClass_UAzSpeechSynthesizerTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechSynthesizerTaskBase), 623073103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_2645936378(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
