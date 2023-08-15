// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Structures/AzSpeechAudioInputDeviceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechAudioInputDeviceInfo() {}
// Cross Module References
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechAudioInputDeviceInfo;
class UScriptStruct* FAzSpeechAudioInputDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechAudioInputDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechAudioInputDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechAudioInputDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechAudioInputDeviceInfo.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechAudioInputDeviceInfo>()
{
	return FAzSpeechAudioInputDeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechAudioInputDeviceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechAudioInputDeviceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechAudioInputDeviceInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechAudioInputDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Getter", "GetDeviceID" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechAudioInputDeviceInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechAudioInputDeviceInfo, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewProp_DeviceID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechAudioInputDeviceInfo",
		sizeof(FAzSpeechAudioInputDeviceInfo),
		alignof(FAzSpeechAudioInputDeviceInfo),
		Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechAudioInputDeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechAudioInputDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechAudioInputDeviceInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAudioInputDeviceInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAudioInputDeviceInfo_h_Statics::ScriptStructInfo[] = {
		{ FAzSpeechAudioInputDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo_Statics::NewStructOps, TEXT("AzSpeechAudioInputDeviceInfo"), &Z_Registration_Info_UScriptStruct_AzSpeechAudioInputDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechAudioInputDeviceInfo), 651049656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAudioInputDeviceInfo_h_3858465512(TEXT("/Script/AzSpeech"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAudioInputDeviceInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAudioInputDeviceInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
