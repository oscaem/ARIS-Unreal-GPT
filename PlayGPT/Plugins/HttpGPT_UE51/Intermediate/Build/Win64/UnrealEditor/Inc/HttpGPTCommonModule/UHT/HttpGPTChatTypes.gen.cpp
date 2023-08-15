// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTChatTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTChatTypes() {}
// Cross Module References
	HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel();
	HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatChoice();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatMessage();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatOptions();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatResponse();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatUsage();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonError();
	UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTChatRole;
	static UEnum* EHttpGPTChatRole_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHttpGPTChatRole.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHttpGPTChatRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTChatRole"));
		}
		return Z_Registration_Info_UEnum_EHttpGPTChatRole.OuterSingleton;
	}
	template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTChatRole>()
	{
		return EHttpGPTChatRole_StaticEnum();
	}
	struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enumerators[] = {
		{ "EHttpGPTChatRole::User", (int64)EHttpGPTChatRole::User },
		{ "EHttpGPTChatRole::Assistant", (int64)EHttpGPTChatRole::Assistant },
		{ "EHttpGPTChatRole::System", (int64)EHttpGPTChatRole::System },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enum_MetaDataParams[] = {
		{ "Assistant.Name", "EHttpGPTChatRole::Assistant" },
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Role" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "System.Name", "EHttpGPTChatRole::System" },
		{ "User.Name", "EHttpGPTChatRole::User" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		"EHttpGPTChatRole",
		"EHttpGPTChatRole",
		Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole()
	{
		if (!Z_Registration_Info_UEnum_EHttpGPTChatRole.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTChatRole.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHttpGPTChatRole.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatMessage;
class UScriptStruct* FHttpGPTChatMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatMessage, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatMessage>()
{
	return FHttpGPTChatMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Message" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatMessage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatMessage, Role), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role_MetaData)) }; // 2974137301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatMessage, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewProp_Content,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTChatMessage",
		sizeof(FHttpGPTChatMessage),
		alignof(FHttpGPTChatMessage),
		Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTChatMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatChoice;
class UScriptStruct* FHttpGPTChatChoice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatChoice, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatChoice"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatChoice>()
{
	return FHttpGPTChatChoice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishReason_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FinishReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Choice" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatChoice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatChoice, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatChoice, Message), Z_Construct_UScriptStruct_FHttpGPTChatMessage, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Message_MetaData)) }; // 3211017587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_FinishReason_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_FinishReason = { "FinishReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatChoice, FinishReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_FinishReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_FinishReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewProp_FinishReason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTChatChoice",
		sizeof(FHttpGPTChatChoice),
		alignof(FHttpGPTChatChoice),
		Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatChoice()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTChatChoice.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatUsage;
class UScriptStruct* FHttpGPTChatUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatUsage, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatUsage"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatUsage>()
{
	return FHttpGPTChatUsage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PromptTokens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletionTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompletionTokens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalTokens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Usage" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatUsage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_PromptTokens_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_PromptTokens = { "PromptTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatUsage, PromptTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_PromptTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_PromptTokens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_CompletionTokens_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_CompletionTokens = { "CompletionTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatUsage, CompletionTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_CompletionTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_CompletionTokens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_TotalTokens_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_TotalTokens = { "TotalTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatUsage, TotalTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_TotalTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_TotalTokens_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_PromptTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_CompletionTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewProp_TotalTokens,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTChatUsage",
		sizeof(FHttpGPTChatUsage),
		alignof(FHttpGPTChatUsage),
		Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatUsage()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTChatUsage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatResponse;
class UScriptStruct* FHttpGPTChatResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatResponse, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatResponse"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatResponse>()
{
	return FHttpGPTChatResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Created;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Choices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Usage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Response" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatResponse, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatResponse, Object), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatResponse, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Created_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHttpGPTChatChoice, METADATA_PARAMS(nullptr, 0) }; // 3770519651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatResponse, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices_MetaData)) }; // 3770519651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Usage_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatResponse, Usage), Z_Construct_UScriptStruct_FHttpGPTChatUsage, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Usage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Usage_MetaData)) }; // 2317162880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FHttpGPTChatResponse*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHttpGPTChatResponse), &Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatResponse, Error), Z_Construct_UScriptStruct_FHttpGPTCommonError, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Error_MetaData)) }; // 1688627949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Created,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Choices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Usage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewProp_Error,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTChatResponse",
		sizeof(FHttpGPTChatResponse),
		alignof(FHttpGPTChatResponse),
		Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTChatResponse.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTChatModel;
	static UEnum* EHttpGPTChatModel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHttpGPTChatModel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHttpGPTChatModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTChatModel"));
		}
		return Z_Registration_Info_UEnum_EHttpGPTChatModel.OuterSingleton;
	}
	template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTChatModel>()
	{
		return EHttpGPTChatModel_StaticEnum();
	}
	struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enumerators[] = {
		{ "EHttpGPTChatModel::gpt4", (int64)EHttpGPTChatModel::gpt4 },
		{ "EHttpGPTChatModel::gpt432k", (int64)EHttpGPTChatModel::gpt432k },
		{ "EHttpGPTChatModel::gpt35turbo", (int64)EHttpGPTChatModel::gpt35turbo },
		{ "EHttpGPTChatModel::textdavinci003", (int64)EHttpGPTChatModel::textdavinci003 },
		{ "EHttpGPTChatModel::textdavinci002", (int64)EHttpGPTChatModel::textdavinci002 },
		{ "EHttpGPTChatModel::codedavinci002", (int64)EHttpGPTChatModel::codedavinci002 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "codedavinci002.DisplayName", "code-davinci-002" },
		{ "codedavinci002.Name", "EHttpGPTChatModel::codedavinci002" },
		{ "DisplayName", "HttpGPT Chat Model" },
		{ "gpt35turbo.DisplayName", "gpt-3.5-turbo" },
		{ "gpt35turbo.Name", "EHttpGPTChatModel::gpt35turbo" },
		{ "gpt4.DisplayName", "gpt-4" },
		{ "gpt4.Name", "EHttpGPTChatModel::gpt4" },
		{ "gpt432k.DisplayName", "gpt-4-32k" },
		{ "gpt432k.Name", "EHttpGPTChatModel::gpt432k" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "textdavinci002.DisplayName", "text-davinci-002" },
		{ "textdavinci002.Name", "EHttpGPTChatModel::textdavinci002" },
		{ "textdavinci003.DisplayName", "text-davinci-003" },
		{ "textdavinci003.Name", "EHttpGPTChatModel::textdavinci003" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		"EHttpGPTChatModel",
		"EHttpGPTChatModel",
		Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel()
	{
		if (!Z_Registration_Info_UEnum_EHttpGPTChatModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTChatModel.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHttpGPTChatModel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTChatOptions;
class UScriptStruct* FHttpGPTChatOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTChatOptions, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTChatOptions"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTChatOptions>()
{
	return FHttpGPTChatOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TopP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Choices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStream_MetaData[];
#endif
		static void NewProp_bStream_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStream;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Stop_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stop_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresencePenalty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PresencePenalty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyPenalty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyPenalty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LogitBias_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogitBias_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogitBias_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LogitBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "HttpGPT Chat Options" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTChatOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Model" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, Model), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model_MetaData)) }; // 1781358363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Temperature" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, Temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_TopP_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "TopP" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_TopP = { "TopP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, TopP), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_TopP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_TopP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Choices_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Choices" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, Choices), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Choices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Choices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Stream" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream_SetBit(void* Obj)
	{
		((FHttpGPTChatOptions*)Obj)->bStream = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream = { "bStream", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHttpGPTChatOptions), &Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop_Inner = { "Stop", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Stop" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop = { "Stop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, Stop), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_PresencePenalty_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "DisplayName", "Presence Penalty" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_PresencePenalty = { "PresencePenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, PresencePenalty), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_PresencePenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_PresencePenalty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_FrequencyPenalty_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "-2.0" },
		{ "DisplayName", "Frequency Penalty" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_FrequencyPenalty = { "FrequencyPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, FrequencyPenalty), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_FrequencyPenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_FrequencyPenalty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_MaxTokens_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "ClampMax", "32768" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Max Tokens" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
		{ "UIMax", "32768" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, MaxTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_MaxTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_MaxTokens_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_ValueProp = { "LogitBias", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_Key_KeyProp = { "LogitBias_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_MetaData[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Logit Bias" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTChatTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias = { "LogitBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTChatOptions, LogitBias), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_TopP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Choices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_bStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_Stop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_PresencePenalty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_FrequencyPenalty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_MaxTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewProp_LogitBias,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTChatOptions",
		sizeof(FHttpGPTChatOptions),
		alignof(FHttpGPTChatOptions),
		Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTChatOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::EnumInfo[] = {
		{ EHttpGPTChatRole_StaticEnum, TEXT("EHttpGPTChatRole"), &Z_Registration_Info_UEnum_EHttpGPTChatRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2974137301U) },
		{ EHttpGPTChatModel_StaticEnum, TEXT("EHttpGPTChatModel"), &Z_Registration_Info_UEnum_EHttpGPTChatModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1781358363U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::ScriptStructInfo[] = {
		{ FHttpGPTChatMessage::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatMessage_Statics::NewStructOps, TEXT("HttpGPTChatMessage"), &Z_Registration_Info_UScriptStruct_HttpGPTChatMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatMessage), 3211017587U) },
		{ FHttpGPTChatChoice::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatChoice_Statics::NewStructOps, TEXT("HttpGPTChatChoice"), &Z_Registration_Info_UScriptStruct_HttpGPTChatChoice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatChoice), 3770519651U) },
		{ FHttpGPTChatUsage::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatUsage_Statics::NewStructOps, TEXT("HttpGPTChatUsage"), &Z_Registration_Info_UScriptStruct_HttpGPTChatUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatUsage), 2317162880U) },
		{ FHttpGPTChatResponse::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatResponse_Statics::NewStructOps, TEXT("HttpGPTChatResponse"), &Z_Registration_Info_UScriptStruct_HttpGPTChatResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatResponse), 2434160593U) },
		{ FHttpGPTChatOptions::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTChatOptions_Statics::NewStructOps, TEXT("HttpGPTChatOptions"), &Z_Registration_Info_UScriptStruct_HttpGPTChatOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTChatOptions), 2566289507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_931669084(TEXT("/Script/HttpGPTCommonModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTChatTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
