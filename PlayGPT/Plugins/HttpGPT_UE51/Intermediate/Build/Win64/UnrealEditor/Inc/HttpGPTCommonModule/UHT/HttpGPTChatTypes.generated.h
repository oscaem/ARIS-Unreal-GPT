// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structures/HttpGPTChatTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HTTPGPTCOMMONMODULE_HttpGPTChatTypes_generated_h
#error "HttpGPTChatTypes.generated.h already included, missing '#pragma once' in HttpGPTChatTypes.h"
#endif
#define HTTPGPTCOMMONMODULE_HttpGPTChatTypes_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatMessage>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatChoice>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatUsage>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatResponse>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTChatOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h


#define FOREACH_ENUM_EHTTPGPTCHATROLE(op) \
	op(EHttpGPTChatRole::User) \
	op(EHttpGPTChatRole::Assistant) \
	op(EHttpGPTChatRole::System) 

enum class EHttpGPTChatRole : uint8;
template<> struct TIsUEnumClass<EHttpGPTChatRole> { enum { Value = true }; };
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTChatRole>();

#define FOREACH_ENUM_EHTTPGPTCHATMODEL(op) \
	op(EHttpGPTChatModel::gpt4) \
	op(EHttpGPTChatModel::gpt432k) \
	op(EHttpGPTChatModel::gpt35turbo) \
	op(EHttpGPTChatModel::textdavinci003) \
	op(EHttpGPTChatModel::textdavinci002) \
	op(EHttpGPTChatModel::codedavinci002) 

enum class EHttpGPTChatModel : uint8;
template<> struct TIsUEnumClass<EHttpGPTChatModel> { enum { Value = true }; };
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTChatModel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
