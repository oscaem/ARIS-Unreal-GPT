// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTCommonTypes() {}
// Cross Module References
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonError();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions();
	UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTCommonError;
class UScriptStruct* FHttpGPTCommonError::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTCommonError.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTCommonError.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTCommonError, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTCommonError"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTCommonError.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTCommonError>()
{
	return FHttpGPTCommonError::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "HttpGPT Common Error" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTCommonError>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTCommonError, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTCommonError, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTCommonError, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTCommonError",
		sizeof(FHttpGPTCommonError),
		alignof(FHttpGPTCommonError),
		Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonError()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTCommonError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTCommonError.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTCommonError.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions;
class UScriptStruct* FHttpGPTCommonOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTCommonOptions, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTCommonOptions"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTCommonOptions>()
{
	return FHttpGPTCommonOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_APIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "HttpGPT Common Options" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTCommonOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_APIKey_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "API Key" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTCommonOptions, APIKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_APIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_APIKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_User_MetaData[] = {
		{ "Category", "HttpGPT | Common" },
		{ "DisplayName", "User" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTCommonTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTCommonOptions, User), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_User_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_APIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewProp_User,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTCommonOptions",
		sizeof(FHttpGPTCommonOptions),
		alignof(FHttpGPTCommonOptions),
		Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_Statics::ScriptStructInfo[] = {
		{ FHttpGPTCommonError::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTCommonError_Statics::NewStructOps, TEXT("HttpGPTCommonError"), &Z_Registration_Info_UScriptStruct_HttpGPTCommonError, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTCommonError), 1688627949U) },
		{ FHttpGPTCommonOptions::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTCommonOptions_Statics::NewStructOps, TEXT("HttpGPTCommonOptions"), &Z_Registration_Info_UScriptStruct_HttpGPTCommonOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTCommonOptions), 2823106801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_2282628044(TEXT("/Script/HttpGPTCommonModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTCommonTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
