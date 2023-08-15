// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/AzSpeechHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAzSpeechRecognizerTaskBase;
class UAzSpeechSynthesizerTaskBase;
class UAzSpeechTaskBase;
class UObject;
class USoundWave;
struct FAzSpeechAnimationData;
struct FAzSpeechAudioInputDeviceInfo;
struct FAzSpeechVisemeData;
#ifdef AZSPEECH_AzSpeechHelper_generated_h
#error "AzSpeechHelper.generated.h already included, missing '#pragma once' in AzSpeechHelper.h"
#endif
#define AZSPEECH_AzSpeechHelper_generated_h

#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_SPARSE_DATA
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCastToAzSpeechSynthesizerTaskBase); \
	DECLARE_FUNCTION(execCastToAzSpeechRecognizerTaskBase); \
	DECLARE_FUNCTION(execCastToAzSpeechTaskBase); \
	DECLARE_FUNCTION(execExtractAnimationDataFromVisemeDataArray); \
	DECLARE_FUNCTION(execExtractAnimationDataFromVisemeData); \
	DECLARE_FUNCTION(execGetPluginVersion); \
	DECLARE_FUNCTION(execGetPluginFriendlyName); \
	DECLARE_FUNCTION(execIsContentModuleAvailable); \
	DECLARE_FUNCTION(execGetAvailableContentModules); \
	DECLARE_FUNCTION(execIsAudioInputDeviceIDValid); \
	DECLARE_FUNCTION(execIsAudioInputDeviceAvailable); \
	DECLARE_FUNCTION(execGetAudioInputDeviceInfoFromID); \
	DECLARE_FUNCTION(execGetAvailableAudioInputDevices); \
	DECLARE_FUNCTION(execIsAudioDataValid); \
	DECLARE_FUNCTION(execCheckAndroidPermission); \
	DECLARE_FUNCTION(execOpenDesktopFolderPicker); \
	DECLARE_FUNCTION(execCreateNewDirectory); \
	DECLARE_FUNCTION(execLoadXMLToString); \
	DECLARE_FUNCTION(execConvertAudioDataToSoundWave); \
	DECLARE_FUNCTION(execConvertWavFileToSoundWave); \
	DECLARE_FUNCTION(execQualifyXMLFileName); \
	DECLARE_FUNCTION(execQualifyWAVFileName); \
	DECLARE_FUNCTION(execQualifyFileExtension); \
	DECLARE_FUNCTION(execQualifyPath); \
	DECLARE_FUNCTION(execQualifyModulePath);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCastToAzSpeechSynthesizerTaskBase); \
	DECLARE_FUNCTION(execCastToAzSpeechRecognizerTaskBase); \
	DECLARE_FUNCTION(execCastToAzSpeechTaskBase); \
	DECLARE_FUNCTION(execExtractAnimationDataFromVisemeDataArray); \
	DECLARE_FUNCTION(execExtractAnimationDataFromVisemeData); \
	DECLARE_FUNCTION(execGetPluginVersion); \
	DECLARE_FUNCTION(execGetPluginFriendlyName); \
	DECLARE_FUNCTION(execIsContentModuleAvailable); \
	DECLARE_FUNCTION(execGetAvailableContentModules); \
	DECLARE_FUNCTION(execIsAudioInputDeviceIDValid); \
	DECLARE_FUNCTION(execIsAudioInputDeviceAvailable); \
	DECLARE_FUNCTION(execGetAudioInputDeviceInfoFromID); \
	DECLARE_FUNCTION(execGetAvailableAudioInputDevices); \
	DECLARE_FUNCTION(execIsAudioDataValid); \
	DECLARE_FUNCTION(execCheckAndroidPermission); \
	DECLARE_FUNCTION(execOpenDesktopFolderPicker); \
	DECLARE_FUNCTION(execCreateNewDirectory); \
	DECLARE_FUNCTION(execLoadXMLToString); \
	DECLARE_FUNCTION(execConvertAudioDataToSoundWave); \
	DECLARE_FUNCTION(execConvertWavFileToSoundWave); \
	DECLARE_FUNCTION(execQualifyXMLFileName); \
	DECLARE_FUNCTION(execQualifyWAVFileName); \
	DECLARE_FUNCTION(execQualifyFileExtension); \
	DECLARE_FUNCTION(execQualifyPath); \
	DECLARE_FUNCTION(execQualifyModulePath);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_ACCESSORS
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzSpeechHelper(); \
	friend struct Z_Construct_UClass_UAzSpeechHelper_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechHelper)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAzSpeechHelper(); \
	friend struct Z_Construct_UClass_UAzSpeechHelper_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechHelper)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechHelper(UAzSpeechHelper&&); \
	NO_API UAzSpeechHelper(const UAzSpeechHelper&); \
public: \
	NO_API virtual ~UAzSpeechHelper();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechHelper(UAzSpeechHelper&&); \
	NO_API UAzSpeechHelper(const UAzSpeechHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechHelper) \
	NO_API virtual ~UAzSpeechHelper();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_17_PROLOG
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_RPC_WRAPPERS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_INCLASS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UAzSpeechHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
