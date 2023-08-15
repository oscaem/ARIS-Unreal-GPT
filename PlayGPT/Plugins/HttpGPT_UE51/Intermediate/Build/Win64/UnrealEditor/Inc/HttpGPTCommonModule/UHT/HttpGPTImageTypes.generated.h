// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structures/HttpGPTImageTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HTTPGPTCOMMONMODULE_HttpGPTImageTypes_generated_h
#error "HttpGPTImageTypes.generated.h already included, missing '#pragma once' in HttpGPTImageTypes.h"
#endif
#define HTTPGPTCOMMONMODULE_HttpGPTImageTypes_generated_h

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTImageData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTImageData>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTImageResponse>();

#define FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<struct FHttpGPTImageOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h


#define FOREACH_ENUM_EHTTPGPTIMAGESIZE(op) \
	op(EHttpGPTImageSize::x256) \
	op(EHttpGPTImageSize::x512) \
	op(EHttpGPTImageSize::x1024) 

enum class EHttpGPTImageSize : uint8;
template<> struct TIsUEnumClass<EHttpGPTImageSize> { enum { Value = true }; };
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTImageSize>();

#define FOREACH_ENUM_EHTTPGPTRESPONSEFORMAT(op) \
	op(EHttpGPTResponseFormat::url) \
	op(EHttpGPTResponseFormat::b64_json) 

enum class EHttpGPTResponseFormat : uint8;
template<> struct TIsUEnumClass<EHttpGPTResponseFormat> { enum { Value = true }; };
template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTResponseFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
