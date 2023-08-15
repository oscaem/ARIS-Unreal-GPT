// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeech_init() {}
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AzSpeech;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AzSpeech()
	{
		if (!Z_Registration_Info_UPackage__Script_AzSpeech.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_AudioDataSynthesisDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_RecognitionCompletedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_RecognitionUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AzSpeech_VisemeReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AzSpeech",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2943FEDA,
				0x501D7D4B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AzSpeech.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AzSpeech.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AzSpeech(Z_Construct_UPackage__Script_AzSpeech, TEXT("/Script/AzSpeech"), Z_Registration_Info_UPackage__Script_AzSpeech, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2943FEDA, 0x501D7D4B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
