// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Tasks/Bases/AzSpeechSynthesizerTaskBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
struct FAzSpeechAnimationData;
struct FAzSpeechSynthesisOptions;
struct FAzSpeechVisemeData;
#ifdef AZSPEECH_AzSpeechSynthesizerTaskBase_generated_h
#error "AzSpeechSynthesizerTaskBase.generated.h already included, missing '#pragma once' in AzSpeechSynthesizerTaskBase.h"
#endif
#define AZSPEECH_AzSpeechSynthesizerTaskBase_generated_h

#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_20_DELEGATE \
AZSPEECH_API void FVisemeReceived_DelegateWrapper(const FMulticastScriptDelegate& VisemeReceived, const FAzSpeechVisemeData VisemeData);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_21_DELEGATE \
AZSPEECH_API void FAudioDataSynthesisDelegate_DelegateWrapper(const FMulticastScriptDelegate& AudioDataSynthesisDelegate, TArray<uint8> const& FinalAudioData);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_22_DELEGATE \
AZSPEECH_API void FSoundWaveSynthesisDelegate_DelegateWrapper(const FMulticastScriptDelegate& SoundWaveSynthesisDelegate, USoundWave* GeneratedSound);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_23_DELEGATE \
AZSPEECH_API void FBooleanSynthesisDelegate_DelegateWrapper(const FMulticastScriptDelegate& BooleanSynthesisDelegate, bool bSuccess);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_SPARSE_DATA
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetServiceLatency); \
	DECLARE_FUNCTION(execGetNetworkLatency); \
	DECLARE_FUNCTION(execGetFirstByteLatency); \
	DECLARE_FUNCTION(execGetFinishLatency); \
	DECLARE_FUNCTION(execGetConnectionLatency); \
	DECLARE_FUNCTION(execGetAudioDuration); \
	DECLARE_FUNCTION(execIsSSMLBased); \
	DECLARE_FUNCTION(execGetSynthesisOptions); \
	DECLARE_FUNCTION(execGetSynthesisText); \
	DECLARE_FUNCTION(execIsLastResultValid); \
	DECLARE_FUNCTION(execGetExtractedAnimationDataArray); \
	DECLARE_FUNCTION(execGetLastExtractedAnimationData); \
	DECLARE_FUNCTION(execGetAudioData); \
	DECLARE_FUNCTION(execGetVisemeDataArray); \
	DECLARE_FUNCTION(execGetLastVisemeData);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetServiceLatency); \
	DECLARE_FUNCTION(execGetNetworkLatency); \
	DECLARE_FUNCTION(execGetFirstByteLatency); \
	DECLARE_FUNCTION(execGetFinishLatency); \
	DECLARE_FUNCTION(execGetConnectionLatency); \
	DECLARE_FUNCTION(execGetAudioDuration); \
	DECLARE_FUNCTION(execIsSSMLBased); \
	DECLARE_FUNCTION(execGetSynthesisOptions); \
	DECLARE_FUNCTION(execGetSynthesisText); \
	DECLARE_FUNCTION(execIsLastResultValid); \
	DECLARE_FUNCTION(execGetExtractedAnimationDataArray); \
	DECLARE_FUNCTION(execGetLastExtractedAnimationData); \
	DECLARE_FUNCTION(execGetAudioData); \
	DECLARE_FUNCTION(execGetVisemeDataArray); \
	DECLARE_FUNCTION(execGetLastVisemeData);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_ACCESSORS
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzSpeechSynthesizerTaskBase(); \
	friend struct Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechSynthesizerTaskBase, UAzSpeechTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechSynthesizerTaskBase)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAzSpeechSynthesizerTaskBase(); \
	friend struct Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechSynthesizerTaskBase, UAzSpeechTaskBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechSynthesizerTaskBase)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechSynthesizerTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechSynthesizerTaskBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechSynthesizerTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechSynthesizerTaskBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechSynthesizerTaskBase(UAzSpeechSynthesizerTaskBase&&); \
	NO_API UAzSpeechSynthesizerTaskBase(const UAzSpeechSynthesizerTaskBase&); \
public: \
	NO_API virtual ~UAzSpeechSynthesizerTaskBase();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechSynthesizerTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechSynthesizerTaskBase(UAzSpeechSynthesizerTaskBase&&); \
	NO_API UAzSpeechSynthesizerTaskBase(const UAzSpeechSynthesizerTaskBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechSynthesizerTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechSynthesizerTaskBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechSynthesizerTaskBase) \
	NO_API virtual ~UAzSpeechSynthesizerTaskBase();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_28_PROLOG
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_RPC_WRAPPERS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_INCLASS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UAzSpeechSynthesizerTaskBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSynthesizerTaskBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
