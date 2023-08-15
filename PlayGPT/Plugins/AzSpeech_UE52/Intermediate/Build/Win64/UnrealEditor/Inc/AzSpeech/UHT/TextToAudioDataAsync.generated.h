// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Tasks/TextToAudioDataAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextToAudioDataAsync;
struct FAzSpeechSubscriptionOptions;
struct FAzSpeechSynthesisOptions;
#ifdef AZSPEECH_TextToAudioDataAsync_generated_h
#error "TextToAudioDataAsync.generated.h already included, missing '#pragma once' in TextToAudioDataAsync.h"
#endif
#define AZSPEECH_TextToAudioDataAsync_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_SPARSE_DATA
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTextToAudioData_CustomOptions); \
	DECLARE_FUNCTION(execTextToAudioData_DefaultOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTextToAudioData_CustomOptions); \
	DECLARE_FUNCTION(execTextToAudioData_DefaultOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_ACCESSORS
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextToAudioDataAsync(); \
	friend struct Z_Construct_UClass_UTextToAudioDataAsync_Statics; \
public: \
	DECLARE_CLASS(UTextToAudioDataAsync, UAzSpeechAudioDataSynthesisBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UTextToAudioDataAsync)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTextToAudioDataAsync(); \
	friend struct Z_Construct_UClass_UTextToAudioDataAsync_Statics; \
public: \
	DECLARE_CLASS(UTextToAudioDataAsync, UAzSpeechAudioDataSynthesisBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UTextToAudioDataAsync)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextToAudioDataAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextToAudioDataAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextToAudioDataAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextToAudioDataAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextToAudioDataAsync(UTextToAudioDataAsync&&); \
	NO_API UTextToAudioDataAsync(const UTextToAudioDataAsync&); \
public: \
	NO_API virtual ~UTextToAudioDataAsync();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextToAudioDataAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextToAudioDataAsync(UTextToAudioDataAsync&&); \
	NO_API UTextToAudioDataAsync(const UTextToAudioDataAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextToAudioDataAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextToAudioDataAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextToAudioDataAsync) \
	NO_API virtual ~UTextToAudioDataAsync();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_14_PROLOG
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_RPC_WRAPPERS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_INCLASS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UTextToAudioDataAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToAudioDataAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
