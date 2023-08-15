// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Structures/AzSpeechVisemeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechVisemeData() {}
// Cross Module References
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechVisemeData();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechVisemeData;
class UScriptStruct* FAzSpeechVisemeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechVisemeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechVisemeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechVisemeData, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechVisemeData"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechVisemeData.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechVisemeData>()
{
	return FAzSpeechVisemeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisemeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VisemeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioOffsetMilliseconds_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_AudioOffsetMilliseconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechVisemeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechVisemeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_VisemeID_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechVisemeData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_VisemeID = { "VisemeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechVisemeData, VisemeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_VisemeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_VisemeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_AudioOffsetMilliseconds_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechVisemeData.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_AudioOffsetMilliseconds = { "AudioOffsetMilliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechVisemeData, AudioOffsetMilliseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_AudioOffsetMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_AudioOffsetMilliseconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechVisemeData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechVisemeData, Animation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_VisemeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_AudioOffsetMilliseconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewProp_Animation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechVisemeData",
		sizeof(FAzSpeechVisemeData),
		alignof(FAzSpeechVisemeData),
		Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechVisemeData()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechVisemeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechVisemeData.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechVisemeData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechVisemeData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechVisemeData_h_Statics::ScriptStructInfo[] = {
		{ FAzSpeechVisemeData::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechVisemeData_Statics::NewStructOps, TEXT("AzSpeechVisemeData"), &Z_Registration_Info_UScriptStruct_AzSpeechVisemeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechVisemeData), 3839445482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechVisemeData_h_3883493576(TEXT("/Script/AzSpeech"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechVisemeData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechVisemeData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
