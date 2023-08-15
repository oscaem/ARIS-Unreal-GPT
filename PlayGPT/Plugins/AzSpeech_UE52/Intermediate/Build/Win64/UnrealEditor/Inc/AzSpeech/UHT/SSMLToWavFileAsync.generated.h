// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Tasks/SSMLToWavFileAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USSMLToWavFileAsync;
struct FAzSpeechSubscriptionOptions;
struct FAzSpeechSynthesisOptions;
#ifdef AZSPEECH_SSMLToWavFileAsync_generated_h
#error "SSMLToWavFileAsync.generated.h already included, missing '#pragma once' in SSMLToWavFileAsync.h"
#endif
#define AZSPEECH_SSMLToWavFileAsync_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_SPARSE_DATA
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSSMLToWavFile_CustomOptions); \
	DECLARE_FUNCTION(execSSMLToWavFile_DefaultOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSSMLToWavFile_CustomOptions); \
	DECLARE_FUNCTION(execSSMLToWavFile_DefaultOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_ACCESSORS
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSSMLToWavFileAsync(); \
	friend struct Z_Construct_UClass_USSMLToWavFileAsync_Statics; \
public: \
	DECLARE_CLASS(USSMLToWavFileAsync, UAzSpeechWavFileSynthesisBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(USSMLToWavFileAsync)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSSMLToWavFileAsync(); \
	friend struct Z_Construct_UClass_USSMLToWavFileAsync_Statics; \
public: \
	DECLARE_CLASS(USSMLToWavFileAsync, UAzSpeechWavFileSynthesisBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(USSMLToWavFileAsync)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USSMLToWavFileAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USSMLToWavFileAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USSMLToWavFileAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USSMLToWavFileAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USSMLToWavFileAsync(USSMLToWavFileAsync&&); \
	NO_API USSMLToWavFileAsync(const USSMLToWavFileAsync&); \
public: \
	NO_API virtual ~USSMLToWavFileAsync();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USSMLToWavFileAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USSMLToWavFileAsync(USSMLToWavFileAsync&&); \
	NO_API USSMLToWavFileAsync(const USSMLToWavFileAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USSMLToWavFileAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USSMLToWavFileAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USSMLToWavFileAsync) \
	NO_API virtual ~USSMLToWavFileAsync();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_14_PROLOG
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_RPC_WRAPPERS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_INCLASS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class USSMLToWavFileAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToWavFileAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
