// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Structures/AzSpeechRecognitionMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechRecognitionMap() {}
// Cross Module References
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionData();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionMap();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechRecognitionData;
class UScriptStruct* FAzSpeechRecognitionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechRecognitionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechRecognitionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechRecognitionData, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechRecognitionData"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechRecognitionData.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechRecognitionData>()
{
	return FAzSpeechRecognitionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TriggerKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriggerKeys;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IgnoreKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechRecognitionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Value that will be returned if this recognition data matches the checked string */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
		{ "ToolTip", "Value that will be returned if this recognition data matches the checked string" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ClampMin", "1" },
		{ "Comment", "/* Weight property to use in recognition checks */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
		{ "ToolTip", "Weight property to use in recognition checks" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionData, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_TriggerKeys_Inner = { "TriggerKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_TriggerKeys_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Keys that will define if this recognition data is a good match */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
		{ "ToolTip", "Keys that will define if this recognition data is a good match" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_TriggerKeys = { "TriggerKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionData, TriggerKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_TriggerKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_TriggerKeys_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_IgnoreKeys_Inner = { "IgnoreKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_IgnoreKeys_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* If the recognized string contains any of this ignore keys, this recognition data will be ignored in the check */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
		{ "ToolTip", "If the recognized string contains any of this ignore keys, this recognition data will be ignored in the check" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_IgnoreKeys = { "IgnoreKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionData, IgnoreKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_IgnoreKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_IgnoreKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_TriggerKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_TriggerKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_IgnoreKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewProp_IgnoreKeys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechRecognitionData",
		sizeof(FAzSpeechRecognitionData),
		alignof(FAzSpeechRecognitionData),
		Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionData()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechRecognitionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechRecognitionData.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechRecognitionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechRecognitionMap;
class UScriptStruct* FAzSpeechRecognitionMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechRecognitionMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechRecognitionMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechRecognitionMap"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechRecognitionMap.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechRecognitionMap>()
{
	return FAzSpeechRecognitionMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalRequirementKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRequirementKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalRequirementKeys;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalIgnoreKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIgnoreKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalIgnoreKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechRecognitionMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* The name of this recognition data group */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
		{ "ToolTip", "The name of this recognition data group" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionMap, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechRecognitionData, METADATA_PARAMS(nullptr, 0) }; // 1560742962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Container of trigger/ignore keys and the values that they will returned if matches the recognized string */" },
		{ "DisplayName", "Recognition Data" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
		{ "TitleProperty", "Value: {Value}" },
		{ "ToolTip", "Container of trigger/ignore keys and the values that they will returned if matches the recognized string" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionMap, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_Data_MetaData)) }; // 1560742962
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalRequirementKeys_Inner = { "GlobalRequirementKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalRequirementKeys_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Requirement keys that the recognized string needs to contains at least 1 to check this group */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
		{ "ToolTip", "Requirement keys that the recognized string needs to contains at least 1 to check this group" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalRequirementKeys = { "GlobalRequirementKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionMap, GlobalRequirementKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalRequirementKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalRequirementKeys_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalIgnoreKeys_Inner = { "GlobalIgnoreKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalIgnoreKeys_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Ignore keys that will be applied to the entire group */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechRecognitionMap.h" },
		{ "ToolTip", "Ignore keys that will be applied to the entire group" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalIgnoreKeys = { "GlobalIgnoreKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionMap, GlobalIgnoreKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalIgnoreKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalIgnoreKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalRequirementKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalRequirementKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalIgnoreKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewProp_GlobalIgnoreKeys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechRecognitionMap",
		sizeof(FAzSpeechRecognitionMap),
		alignof(FAzSpeechRecognitionMap),
		Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionMap()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechRecognitionMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechRecognitionMap.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechRecognitionMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechRecognitionMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechRecognitionMap_h_Statics::ScriptStructInfo[] = {
		{ FAzSpeechRecognitionData::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechRecognitionData_Statics::NewStructOps, TEXT("AzSpeechRecognitionData"), &Z_Registration_Info_UScriptStruct_AzSpeechRecognitionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechRecognitionData), 1560742962U) },
		{ FAzSpeechRecognitionMap::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechRecognitionMap_Statics::NewStructOps, TEXT("AzSpeechRecognitionMap"), &Z_Registration_Info_UScriptStruct_AzSpeechRecognitionMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechRecognitionMap), 1725048605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechRecognitionMap_h_3237769882(TEXT("/Script/AzSpeech"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechRecognitionMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechRecognitionMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
