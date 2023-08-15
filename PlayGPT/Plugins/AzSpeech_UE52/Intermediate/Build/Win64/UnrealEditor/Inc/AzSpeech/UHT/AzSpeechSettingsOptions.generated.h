// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AZSPEECH_AzSpeechSettingsOptions_generated_h
#error "AzSpeechSettingsOptions.generated.h already included, missing '#pragma once' in AzSpeechSettingsOptions.h"
#endif
#define AZSPEECH_AzSpeechSettingsOptions_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AZSPEECH_API UScriptStruct* StaticStruct<struct FAzSpeechSubscriptionOptions>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AZSPEECH_API UScriptStruct* StaticStruct<struct FAzSpeechRecognitionOptions>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AZSPEECH_API UScriptStruct* StaticStruct<struct FAzSpeechSynthesisOptions>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AZSPEECH_API UScriptStruct* StaticStruct<struct FAzSpeechSettingsOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h


#define FOREACH_ENUM_EAZSPEECHPROFANITYFILTER(op) \
	op(EAzSpeechProfanityFilter::Raw) \
	op(EAzSpeechProfanityFilter::Masked) \
	op(EAzSpeechProfanityFilter::Removed) 

enum class EAzSpeechProfanityFilter : uint8;
template<> struct TIsUEnumClass<EAzSpeechProfanityFilter> { enum { Value = true }; };
template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechProfanityFilter>();

#define FOREACH_ENUM_EAZSPEECHTHREADPRIORITY(op) \
	op(EAzSpeechThreadPriority::Lowest) \
	op(EAzSpeechThreadPriority::BelowNormal) \
	op(EAzSpeechThreadPriority::Normal) \
	op(EAzSpeechThreadPriority::AboveNormal) \
	op(EAzSpeechThreadPriority::Highest) 

enum class EAzSpeechThreadPriority : uint8;
template<> struct TIsUEnumClass<EAzSpeechThreadPriority> { enum { Value = true }; };
template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechThreadPriority>();

#define FOREACH_ENUM_EAZSPEECHSYNTHESISOUTPUTFORMAT(op) \
	op(EAzSpeechSynthesisOutputFormat::Riff16Khz16BitMonoPcm) \
	op(EAzSpeechSynthesisOutputFormat::Riff24Khz16BitMonoPcm) \
	op(EAzSpeechSynthesisOutputFormat::Riff48Khz16BitMonoPcm) \
	op(EAzSpeechSynthesisOutputFormat::Riff22050Hz16BitMonoPcm) \
	op(EAzSpeechSynthesisOutputFormat::Riff44100Hz16BitMonoPcm) 

enum class EAzSpeechSynthesisOutputFormat : uint8;
template<> struct TIsUEnumClass<EAzSpeechSynthesisOutputFormat> { enum { Value = true }; };
template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechSynthesisOutputFormat>();

#define FOREACH_ENUM_EAZSPEECHRECOGNITIONOUTPUTFORMAT(op) \
	op(EAzSpeechRecognitionOutputFormat::Simple) \
	op(EAzSpeechRecognitionOutputFormat::Detailed) 

enum class EAzSpeechRecognitionOutputFormat : uint8;
template<> struct TIsUEnumClass<EAzSpeechRecognitionOutputFormat> { enum { Value = true }; };
template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechRecognitionOutputFormat>();

#define FOREACH_ENUM_EAZSPEECHLANGUAGEIDENTIFICATIONMODE(op) \
	op(EAzSpeechLanguageIdentificationMode::AtStart) \
	op(EAzSpeechLanguageIdentificationMode::Continuous) 

enum class EAzSpeechLanguageIdentificationMode : uint8;
template<> struct TIsUEnumClass<EAzSpeechLanguageIdentificationMode> { enum { Value = true }; };
template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechLanguageIdentificationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
