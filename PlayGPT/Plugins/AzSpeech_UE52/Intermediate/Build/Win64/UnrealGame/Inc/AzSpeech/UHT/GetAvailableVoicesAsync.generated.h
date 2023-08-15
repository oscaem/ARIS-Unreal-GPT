// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Tasks/GetAvailableVoicesAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGetAvailableVoicesAsync;
class UObject;
#ifdef AZSPEECH_GetAvailableVoicesAsync_generated_h
#error "GetAvailableVoicesAsync.generated.h already included, missing '#pragma once' in GetAvailableVoicesAsync.h"
#endif
#define AZSPEECH_GetAvailableVoicesAsync_generated_h

#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_11_DELEGATE \
AZSPEECH_API void FAzSpeechFindAvailableVoicesFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& AzSpeechFindAvailableVoicesFailDelegate);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_12_DELEGATE \
AZSPEECH_API void FAzSpeechFindAvailableVoicesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& AzSpeechFindAvailableVoicesResultDelegate, TArray<FString> const& AvailableVoices);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_SPARSE_DATA
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvailableVoicesAsync);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvailableVoicesAsync);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_ACCESSORS
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetAvailableVoicesAsync(); \
	friend struct Z_Construct_UClass_UGetAvailableVoicesAsync_Statics; \
public: \
	DECLARE_CLASS(UGetAvailableVoicesAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UGetAvailableVoicesAsync)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGetAvailableVoicesAsync(); \
	friend struct Z_Construct_UClass_UGetAvailableVoicesAsync_Statics; \
public: \
	DECLARE_CLASS(UGetAvailableVoicesAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UGetAvailableVoicesAsync)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetAvailableVoicesAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetAvailableVoicesAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetAvailableVoicesAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetAvailableVoicesAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetAvailableVoicesAsync(UGetAvailableVoicesAsync&&); \
	NO_API UGetAvailableVoicesAsync(const UGetAvailableVoicesAsync&); \
public: \
	NO_API virtual ~UGetAvailableVoicesAsync();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetAvailableVoicesAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetAvailableVoicesAsync(UGetAvailableVoicesAsync&&); \
	NO_API UGetAvailableVoicesAsync(const UGetAvailableVoicesAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetAvailableVoicesAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetAvailableVoicesAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetAvailableVoicesAsync) \
	NO_API virtual ~UGetAvailableVoicesAsync();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_17_PROLOG
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_RPC_WRAPPERS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_INCLASS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UGetAvailableVoicesAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
