// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzSpeech/Tasks/Bases/AzSpeechSpeechSynthesisBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAudioComponentPlayState : uint8;
#ifdef AZSPEECH_AzSpeechSpeechSynthesisBase_generated_h
#error "AzSpeechSpeechSynthesisBase.generated.h already included, missing '#pragma once' in AzSpeechSpeechSynthesisBase.h"
#endif
#define AZSPEECH_AzSpeechSpeechSynthesisBase_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_SPARSE_DATA
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAudioPlayStateChanged);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAudioPlayStateChanged);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_ACCESSORS
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzSpeechSpeechSynthesisBase(); \
	friend struct Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechSpeechSynthesisBase, UAzSpeechAudioDataSynthesisBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechSpeechSynthesisBase)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAzSpeechSpeechSynthesisBase(); \
	friend struct Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics; \
public: \
	DECLARE_CLASS(UAzSpeechSpeechSynthesisBase, UAzSpeechAudioDataSynthesisBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AzSpeech"), NO_API) \
	DECLARE_SERIALIZER(UAzSpeechSpeechSynthesisBase)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechSpeechSynthesisBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechSpeechSynthesisBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechSpeechSynthesisBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechSpeechSynthesisBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechSpeechSynthesisBase(UAzSpeechSpeechSynthesisBase&&); \
	NO_API UAzSpeechSpeechSynthesisBase(const UAzSpeechSpeechSynthesisBase&); \
public: \
	NO_API virtual ~UAzSpeechSpeechSynthesisBase();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzSpeechSpeechSynthesisBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzSpeechSpeechSynthesisBase(UAzSpeechSpeechSynthesisBase&&); \
	NO_API UAzSpeechSpeechSynthesisBase(const UAzSpeechSpeechSynthesisBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzSpeechSpeechSynthesisBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzSpeechSpeechSynthesisBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzSpeechSpeechSynthesisBase) \
	NO_API virtual ~UAzSpeechSpeechSynthesisBase();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_16_PROLOG
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_RPC_WRAPPERS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_INCLASS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZSPEECH_API UClass* StaticClass<class UAzSpeechSpeechSynthesisBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
