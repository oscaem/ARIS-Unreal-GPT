// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/HttpGPTChatRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHttpGPTChatRequest;
class UObject;
struct FHttpGPTChatMessage;
struct FHttpGPTChatOptions;
struct FHttpGPTChatResponse;
struct FHttpGPTCommonOptions;
#ifdef HTTPGPTCHATMODULE_HttpGPTChatRequest_generated_h
#error "HttpGPTChatRequest.generated.h already included, missing '#pragma once' in HttpGPTChatRequest.h"
#endif
#define HTTPGPTCHATMODULE_HttpGPTChatRequest_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_14_DELEGATE \
HTTPGPTCHATMODULE_API void FHttpGPTChatResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTChatResponseDelegate, FHttpGPTChatResponse const& Response);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_SPARSE_DATA
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChatOptions); \
	DECLARE_FUNCTION(execSendMessages_CustomOptions); \
	DECLARE_FUNCTION(execSendMessage_CustomOptions); \
	DECLARE_FUNCTION(execSendMessages_DefaultOptions); \
	DECLARE_FUNCTION(execSendMessage_DefaultOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChatOptions); \
	DECLARE_FUNCTION(execSendMessages_CustomOptions); \
	DECLARE_FUNCTION(execSendMessage_CustomOptions); \
	DECLARE_FUNCTION(execSendMessages_DefaultOptions); \
	DECLARE_FUNCTION(execSendMessage_DefaultOptions);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_ACCESSORS
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTChatRequest(); \
	friend struct Z_Construct_UClass_UHttpGPTChatRequest_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTChatRequest, UHttpGPTBaseTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTChatModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTChatRequest)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUHttpGPTChatRequest(); \
	friend struct Z_Construct_UClass_UHttpGPTChatRequest_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTChatRequest, UHttpGPTBaseTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTChatModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTChatRequest)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTChatRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTChatRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTChatRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTChatRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpGPTChatRequest(UHttpGPTChatRequest&&); \
	NO_API UHttpGPTChatRequest(const UHttpGPTChatRequest&); \
public: \
	NO_API virtual ~UHttpGPTChatRequest();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTChatRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpGPTChatRequest(UHttpGPTChatRequest&&); \
	NO_API UHttpGPTChatRequest(const UHttpGPTChatRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTChatRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTChatRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTChatRequest) \
	NO_API virtual ~UHttpGPTChatRequest();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_19_PROLOG
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_RPC_WRAPPERS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_INCLASS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTCHATMODULE_API UClass* StaticClass<class UHttpGPTChatRequest>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_SPARSE_DATA
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCastToHttpGPTChatRequest);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCastToHttpGPTChatRequest);


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_ACCESSORS
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpGPTChatHelper(); \
	friend struct Z_Construct_UClass_UHttpGPTChatHelper_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTChatHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTChatModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTChatHelper)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUHttpGPTChatHelper(); \
	friend struct Z_Construct_UClass_UHttpGPTChatHelper_Statics; \
public: \
	DECLARE_CLASS(UHttpGPTChatHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HttpGPTChatModule"), NO_API) \
	DECLARE_SERIALIZER(UHttpGPTChatHelper)


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTChatHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTChatHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTChatHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTChatHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpGPTChatHelper(UHttpGPTChatHelper&&); \
	NO_API UHttpGPTChatHelper(const UHttpGPTChatHelper&); \
public: \
	NO_API virtual ~UHttpGPTChatHelper();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpGPTChatHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpGPTChatHelper(UHttpGPTChatHelper&&); \
	NO_API UHttpGPTChatHelper(const UHttpGPTChatHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpGPTChatHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpGPTChatHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpGPTChatHelper) \
	NO_API virtual ~UHttpGPTChatHelper();


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_77_PROLOG
#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_RPC_WRAPPERS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_INCLASS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_SPARSE_DATA \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_ACCESSORS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTPGPTCHATMODULE_API UClass* StaticClass<class UHttpGPTChatHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTChatModule_Public_Tasks_HttpGPTChatRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
