// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/AzSpeechSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAzSpeechPhraseListMap;
struct FAzSpeechRecognitionMap;
struct FAzSpeechSettingsOptions;
#ifdef AZSPEECH_AzSpeechSettings_generated_h
#error "AzSpeechSettings.generated.h already included, missing '#pragma once' in AzSpeechSettings.h"
#endif
#define AZSPEECH_AzSpeechSettings_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_SPARSE_DATA
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDefaultOptions); \
	DECLARE_FUNCTION(execGetDefaultOptions); \
	DECLARE_FUNCTION(execGetStringDelimiters); \
	DECLARE_FUNCTION(execGetRecognitionMap); \
	DECLARE_FUNCTION(execGetPhraseListMap); \
	DECLARE_FUNCTION(execGetCandidateLanguages);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDefaultOptions); \
	DECLARE_FUNCTION(execGetDefaultOptions); \
	DECLARE_FUNCTION(execGetStringDelimiters); \
	DECLARE_FUNCTION(execGetRecognitionMap); \
	DECLARE_FUNCTION(execGetPhraseListMap); \
	DECLARE_FUNCTION(execGetCandidateLanguages);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_ACCESSORS
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzSpeechSettings(); \
	friend struct Z_Construct_UClass_UAzSpeechSettings_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAzSpeechSettings(); \
	friend struct Z_Construct_UClass_UAzSpeechSettings_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechSettings(UAzSpeechSettings&&); \
	NO_API UAzSpeechSettings(const UAzSpeechSettings&); \
public: \
	NO_API virtual ~UAzSpeechSettings();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechSettings(UAzSpeechSettings&&); \
	NO_API UAzSpeechSettings(const UAzSpeechSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechSettings) \
	NO_API virtual ~UAzSpeechSettings();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_17_PROLOG
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_RPC_WRAPPERS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_INCLASS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UAzSpeechSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
