// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Tasks/Bases/AzSpeechTaskBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAzSpeechTaskBase;
struct FAzSpeechSubscriptionOptions;
#ifdef AZSPEECH_AzSpeechTaskBase_generated_h
#error "AzSpeechTaskBase.generated.h already included, missing '#pragma once' in AzSpeechTaskBase.h"
#endif
#define AZSPEECH_AzSpeechTaskBase_generated_h

#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_19_DELEGATE \
AZSPEECH_API void FAzSpeechTaskGenericDelegate_DelegateWrapper(const FMulticastScriptDelegate& AzSpeechTaskGenericDelegate);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_SPARSE_DATA
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSubscriptionOptions); \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execStopAzSpeechTask);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSubscriptionOptions); \
	DECLARE_FUNCTION(execGetTaskName); \
	DECLARE_FUNCTION(execStopAzSpeechTask);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_ACCESSORS
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzSpeechTaskBase(); \
	friend struct Z_Construct_UClass_UAzSpeechTaskBase_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechTaskBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechTaskBase)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAzSpeechTaskBase(); \
	friend struct Z_Construct_UClass_UAzSpeechTaskBase_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechTaskBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechTaskBase)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechTaskBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechTaskBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechTaskBase(UAzSpeechTaskBase&&); \
	NO_API UAzSpeechTaskBase(const UAzSpeechTaskBase&); \
public: \
	NO_API virtual ~UAzSpeechTaskBase();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechTaskBase(UAzSpeechTaskBase&&); \
	NO_API UAzSpeechTaskBase(const UAzSpeechTaskBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechTaskBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechTaskBase) \
	NO_API virtual ~UAzSpeechTaskBase();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_24_PROLOG
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_RPC_WRAPPERS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_INCLASS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UAzSpeechTaskBase>();

#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_SPARSE_DATA
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTaskStillValid); \
	DECLARE_FUNCTION(execIsTaskReadyToDestroy); \
	DECLARE_FUNCTION(execIsTaskActive);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTaskStillValid); \
	DECLARE_FUNCTION(execIsTaskReadyToDestroy); \
	DECLARE_FUNCTION(execIsTaskActive);


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_ACCESSORS
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzSpeechTaskStatus(); \
	friend struct Z_Construct_UClass_UAzSpeechTaskStatus_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechTaskStatus, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechTaskStatus)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUAzSpeechTaskStatus(); \
	friend struct Z_Construct_UClass_UAzSpeechTaskStatus_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechTaskStatus, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechTaskStatus)


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechTaskStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechTaskStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechTaskStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechTaskStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechTaskStatus(UAzSpeechTaskStatus&&); \
	NO_API UAzSpeechTaskStatus(const UAzSpeechTaskStatus&); \
public: \
	NO_API virtual ~UAzSpeechTaskStatus();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechTaskStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechTaskStatus(UAzSpeechTaskStatus&&); \
	NO_API UAzSpeechTaskStatus(const UAzSpeechTaskStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechTaskStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechTaskStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechTaskStatus) \
	NO_API virtual ~UAzSpeechTaskStatus();


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_104_PROLOG
#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_RPC_WRAPPERS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_INCLASS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_SPARSE_DATA \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_ACCESSORS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UAzSpeechTaskStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
