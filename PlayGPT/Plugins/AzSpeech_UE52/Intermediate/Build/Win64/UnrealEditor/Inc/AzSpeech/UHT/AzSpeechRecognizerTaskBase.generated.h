// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Tasks/Bases/AzSpeechRecognizerTaskBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAzSpeechRecognitionOptions;
#ifdef AZSPEECH_AzSpeechRecognizerTaskBase_generated_h
#error "AzSpeechRecognizerTaskBase.generated.h already included, missing '#pragma once' in AzSpeechRecognizerTaskBase.h"
#endif
#define AZSPEECH_AzSpeechRecognizerTaskBase_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_16_DELEGATE \
AZSPEECH_API void FRecognitionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RecognitionUpdatedDelegate, const FString& UpdatedString);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_17_DELEGATE \
AZSPEECH_API void FRecognitionCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RecognitionCompletedDelegate, const FString& FinalString);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_SPARSE_DATA
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRecognitionLatency); \
	DECLARE_FUNCTION(execGetRecognitionDuration); \
	DECLARE_FUNCTION(execGetRecognizedString); \
	DECLARE_FUNCTION(execGetRecognitionOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRecognitionLatency); \
	DECLARE_FUNCTION(execGetRecognitionDuration); \
	DECLARE_FUNCTION(execGetRecognizedString); \
	DECLARE_FUNCTION(execGetRecognitionOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_ACCESSORS
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzSpeechRecognizerTaskBase(); \
	friend struct Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechRecognizerTaskBase, UAzSpeechTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechRecognizerTaskBase)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAzSpeechRecognizerTaskBase(); \
	friend struct Z_Construct_UClass_UAzSpeechRecognizerTaskBase_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechRecognizerTaskBase, UAzSpeechTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechRecognizerTaskBase)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechRecognizerTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechRecognizerTaskBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechRecognizerTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechRecognizerTaskBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechRecognizerTaskBase(UAzSpeechRecognizerTaskBase&&); \
	NO_API UAzSpeechRecognizerTaskBase(const UAzSpeechRecognizerTaskBase&); \
public: \
	NO_API virtual ~UAzSpeechRecognizerTaskBase();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechRecognizerTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechRecognizerTaskBase(UAzSpeechRecognizerTaskBase&&); \
	NO_API UAzSpeechRecognizerTaskBase(const UAzSpeechRecognizerTaskBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechRecognizerTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechRecognizerTaskBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechRecognizerTaskBase) \
	NO_API virtual ~UAzSpeechRecognizerTaskBase();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_22_PROLOG
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_RPC_WRAPPERS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_INCLASS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UAzSpeechRecognizerTaskBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechRecognizerTaskBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
