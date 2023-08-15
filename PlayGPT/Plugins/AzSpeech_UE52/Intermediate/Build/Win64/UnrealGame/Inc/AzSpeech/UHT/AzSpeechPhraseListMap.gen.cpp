// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Structures/AzSpeechPhraseListMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechPhraseListMap() {}
// Cross Module References
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechPhraseListMap();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechPhraseListMap;
class UScriptStruct* FAzSpeechPhraseListMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechPhraseListMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechPhraseListMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechPhraseListMap, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechPhraseListMap"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechPhraseListMap.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechPhraseListMap>()
{
	return FAzSpeechPhraseListMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechPhraseListMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechPhraseListMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* The name of this phrase list data group */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechPhraseListMap.h" },
		{ "ToolTip", "The name of this phrase list data group" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechPhraseListMap, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Array of phrase lists that will be used to improve recognition accuracy */" },
		{ "DisplayName", "Phrase List" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechPhraseListMap.h" },
		{ "ToolTip", "Array of phrase lists that will be used to improve recognition accuracy" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechPhraseListMap, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechPhraseListMap",
		sizeof(FAzSpeechPhraseListMap),
		alignof(FAzSpeechPhraseListMap),
		Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechPhraseListMap()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechPhraseListMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechPhraseListMap.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechPhraseListMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechPhraseListMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechPhraseListMap_h_Statics::ScriptStructInfo[] = {
		{ FAzSpeechPhraseListMap::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechPhraseListMap_Statics::NewStructOps, TEXT("AzSpeechPhraseListMap"), &Z_Registration_Info_UScriptStruct_AzSpeechPhraseListMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechPhraseListMap), 2102725206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechPhraseListMap_h_2281693195(TEXT("/Script/AzSpeech"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechPhraseListMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechPhraseListMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
