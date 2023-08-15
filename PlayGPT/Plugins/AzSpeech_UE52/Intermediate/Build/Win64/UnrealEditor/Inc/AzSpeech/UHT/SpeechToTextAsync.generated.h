// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Tasks/SpeechToTextAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USpeechToTextAsync;
struct FAzSpeechRecognitionOptions;
struct FAzSpeechSubscriptionOptions;
#ifdef AZSPEECH_SpeechToTextAsync_generated_h
#error "SpeechToTextAsync.generated.h already included, missing '#pragma once' in SpeechToTextAsync.h"
#endif
#define AZSPEECH_SpeechToTextAsync_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_SPARSE_DATA
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsUsingDefaultAudioInputDevice); \
	DECLARE_FUNCTION(execSpeechToText_CustomOptions); \
	DECLARE_FUNCTION(execSpeechToText_DefaultOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsUsingDefaultAudioInputDevice); \
	DECLARE_FUNCTION(execSpeechToText_CustomOptions); \
	DECLARE_FUNCTION(execSpeechToText_DefaultOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_ACCESSORS
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpeechToTextAsync(); \
	friend struct Z_Construct_UClass_USpeechToTextAsync_Statics; \
public: \
	DECLARE_CLASS(USpeechToTextAsync, UAzSpeechRecognizerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(USpeechToTextAsync)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSpeechToTextAsync(); \
	friend struct Z_Construct_UClass_USpeechToTextAsync_Statics; \
public: \
	DECLARE_CLASS(USpeechToTextAsync, UAzSpeechRecognizerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(USpeechToTextAsync)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeechToTextAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeechToTextAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechToTextAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechToTextAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeechToTextAsync(USpeechToTextAsync&&); \
	NO_API USpeechToTextAsync(const USpeechToTextAsync&); \
public: \
	NO_API virtual ~USpeechToTextAsync();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeechToTextAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeechToTextAsync(USpeechToTextAsync&&); \
	NO_API USpeechToTextAsync(const USpeechToTextAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechToTextAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechToTextAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeechToTextAsync) \
	NO_API virtual ~USpeechToTextAsync();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_14_PROLOG
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_RPC_WRAPPERS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_INCLASS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class USpeechToTextAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
