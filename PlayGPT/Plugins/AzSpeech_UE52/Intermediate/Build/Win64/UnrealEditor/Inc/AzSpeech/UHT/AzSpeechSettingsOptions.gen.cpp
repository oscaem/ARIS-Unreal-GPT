// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechSettingsOptions() {}
// Cross Module References
	AZSPEECH_API UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode();
	AZSPEECH_API UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter();
	AZSPEECH_API UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat();
	AZSPEECH_API UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat();
	AZSPEECH_API UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSettingsOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzSpeechProfanityFilter;
	static UEnum* EAzSpeechProfanityFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechProfanityFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzSpeechProfanityFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("EAzSpeechProfanityFilter"));
		}
		return Z_Registration_Info_UEnum_EAzSpeechProfanityFilter.OuterSingleton;
	}
	template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechProfanityFilter>()
	{
		return EAzSpeechProfanityFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics::Enumerators[] = {
		{ "EAzSpeechProfanityFilter::Raw", (int64)EAzSpeechProfanityFilter::Raw },
		{ "EAzSpeechProfanityFilter::Masked", (int64)EAzSpeechProfanityFilter::Masked },
		{ "EAzSpeechProfanityFilter::Removed", (int64)EAzSpeechProfanityFilter::Removed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "Masked.Name", "EAzSpeechProfanityFilter::Masked" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "Raw.Name", "EAzSpeechProfanityFilter::Raw" },
		{ "Removed.Name", "EAzSpeechProfanityFilter::Removed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		"EAzSpeechProfanityFilter",
		"EAzSpeechProfanityFilter",
		Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechProfanityFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzSpeechProfanityFilter.InnerSingleton, Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzSpeechProfanityFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzSpeechThreadPriority;
	static UEnum* EAzSpeechThreadPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechThreadPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzSpeechThreadPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("EAzSpeechThreadPriority"));
		}
		return Z_Registration_Info_UEnum_EAzSpeechThreadPriority.OuterSingleton;
	}
	template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechThreadPriority>()
	{
		return EAzSpeechThreadPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics::Enumerators[] = {
		{ "EAzSpeechThreadPriority::Lowest", (int64)EAzSpeechThreadPriority::Lowest },
		{ "EAzSpeechThreadPriority::BelowNormal", (int64)EAzSpeechThreadPriority::BelowNormal },
		{ "EAzSpeechThreadPriority::Normal", (int64)EAzSpeechThreadPriority::Normal },
		{ "EAzSpeechThreadPriority::AboveNormal", (int64)EAzSpeechThreadPriority::AboveNormal },
		{ "EAzSpeechThreadPriority::Highest", (int64)EAzSpeechThreadPriority::Highest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics::Enum_MetaDataParams[] = {
		{ "AboveNormal.Name", "EAzSpeechThreadPriority::AboveNormal" },
		{ "BelowNormal.Name", "EAzSpeechThreadPriority::BelowNormal" },
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "Highest.Name", "EAzSpeechThreadPriority::Highest" },
		{ "Lowest.Name", "EAzSpeechThreadPriority::Lowest" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "Normal.Name", "EAzSpeechThreadPriority::Normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		"EAzSpeechThreadPriority",
		"EAzSpeechThreadPriority",
		Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechThreadPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzSpeechThreadPriority.InnerSingleton, Z_Construct_UEnum_AzSpeech_EAzSpeechThreadPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzSpeechThreadPriority.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzSpeechSynthesisOutputFormat;
	static UEnum* EAzSpeechSynthesisOutputFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechSynthesisOutputFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzSpeechSynthesisOutputFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("EAzSpeechSynthesisOutputFormat"));
		}
		return Z_Registration_Info_UEnum_EAzSpeechSynthesisOutputFormat.OuterSingleton;
	}
	template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechSynthesisOutputFormat>()
	{
		return EAzSpeechSynthesisOutputFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics::Enumerators[] = {
		{ "EAzSpeechSynthesisOutputFormat::Riff16Khz16BitMonoPcm", (int64)EAzSpeechSynthesisOutputFormat::Riff16Khz16BitMonoPcm },
		{ "EAzSpeechSynthesisOutputFormat::Riff24Khz16BitMonoPcm", (int64)EAzSpeechSynthesisOutputFormat::Riff24Khz16BitMonoPcm },
		{ "EAzSpeechSynthesisOutputFormat::Riff48Khz16BitMonoPcm", (int64)EAzSpeechSynthesisOutputFormat::Riff48Khz16BitMonoPcm },
		{ "EAzSpeechSynthesisOutputFormat::Riff22050Hz16BitMonoPcm", (int64)EAzSpeechSynthesisOutputFormat::Riff22050Hz16BitMonoPcm },
		{ "EAzSpeechSynthesisOutputFormat::Riff44100Hz16BitMonoPcm", (int64)EAzSpeechSynthesisOutputFormat::Riff44100Hz16BitMonoPcm },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "Riff16Khz16BitMonoPcm.Name", "EAzSpeechSynthesisOutputFormat::Riff16Khz16BitMonoPcm" },
		{ "Riff22050Hz16BitMonoPcm.Name", "EAzSpeechSynthesisOutputFormat::Riff22050Hz16BitMonoPcm" },
		{ "Riff24Khz16BitMonoPcm.Name", "EAzSpeechSynthesisOutputFormat::Riff24Khz16BitMonoPcm" },
		{ "Riff44100Hz16BitMonoPcm.Name", "EAzSpeechSynthesisOutputFormat::Riff44100Hz16BitMonoPcm" },
		{ "Riff48Khz16BitMonoPcm.Name", "EAzSpeechSynthesisOutputFormat::Riff48Khz16BitMonoPcm" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		"EAzSpeechSynthesisOutputFormat",
		"EAzSpeechSynthesisOutputFormat",
		Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechSynthesisOutputFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzSpeechSynthesisOutputFormat.InnerSingleton, Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzSpeechSynthesisOutputFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzSpeechRecognitionOutputFormat;
	static UEnum* EAzSpeechRecognitionOutputFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechRecognitionOutputFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzSpeechRecognitionOutputFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("EAzSpeechRecognitionOutputFormat"));
		}
		return Z_Registration_Info_UEnum_EAzSpeechRecognitionOutputFormat.OuterSingleton;
	}
	template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechRecognitionOutputFormat>()
	{
		return EAzSpeechRecognitionOutputFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics::Enumerators[] = {
		{ "EAzSpeechRecognitionOutputFormat::Simple", (int64)EAzSpeechRecognitionOutputFormat::Simple },
		{ "EAzSpeechRecognitionOutputFormat::Detailed", (int64)EAzSpeechRecognitionOutputFormat::Detailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "Detailed.Name", "EAzSpeechRecognitionOutputFormat::Detailed" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "Simple.Name", "EAzSpeechRecognitionOutputFormat::Simple" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		"EAzSpeechRecognitionOutputFormat",
		"EAzSpeechRecognitionOutputFormat",
		Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechRecognitionOutputFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzSpeechRecognitionOutputFormat.InnerSingleton, Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzSpeechRecognitionOutputFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzSpeechLanguageIdentificationMode;
	static UEnum* EAzSpeechLanguageIdentificationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechLanguageIdentificationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzSpeechLanguageIdentificationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("EAzSpeechLanguageIdentificationMode"));
		}
		return Z_Registration_Info_UEnum_EAzSpeechLanguageIdentificationMode.OuterSingleton;
	}
	template<> AZSPEECH_API UEnum* StaticEnum<EAzSpeechLanguageIdentificationMode>()
	{
		return EAzSpeechLanguageIdentificationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics::Enumerators[] = {
		{ "EAzSpeechLanguageIdentificationMode::AtStart", (int64)EAzSpeechLanguageIdentificationMode::AtStart },
		{ "EAzSpeechLanguageIdentificationMode::Continuous", (int64)EAzSpeechLanguageIdentificationMode::Continuous },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics::Enum_MetaDataParams[] = {
		{ "AtStart.Name", "EAzSpeechLanguageIdentificationMode::AtStart" },
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "Continuous.Name", "EAzSpeechLanguageIdentificationMode::Continuous" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		"EAzSpeechLanguageIdentificationMode",
		"EAzSpeechLanguageIdentificationMode",
		Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode()
	{
		if (!Z_Registration_Info_UEnum_EAzSpeechLanguageIdentificationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzSpeechLanguageIdentificationMode.InnerSingleton, Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzSpeechLanguageIdentificationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechSubscriptionOptions;
class UScriptStruct* FAzSpeechSubscriptionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechSubscriptionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechSubscriptionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechSubscriptionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechSubscriptionOptions.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechSubscriptionOptions>()
{
	return FAzSpeechSubscriptionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubscriptionKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubscriptionKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RegionID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePrivateEndpoint_MetaData[];
#endif
		static void NewProp_bUsePrivateEndpoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePrivateEndpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PrivateEndpoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechSubscriptionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_SubscriptionKey_MetaData[] = {
		{ "Category", "Azure" },
		{ "DisplayName", "Subscription Key" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_SubscriptionKey = { "SubscriptionKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSubscriptionOptions, SubscriptionKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_SubscriptionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_SubscriptionKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_RegionID_MetaData[] = {
		{ "Category", "Azure" },
		{ "DisplayName", "Region ID" },
		{ "EditCondition", "!bUsePrivateEndpoint" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_RegionID = { "RegionID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSubscriptionOptions, RegionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_RegionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_RegionID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_bUsePrivateEndpoint_MetaData[] = {
		{ "Category", "Azure" },
		{ "DisplayName", "Use Private Endpoint" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_bUsePrivateEndpoint_SetBit(void* Obj)
	{
		((FAzSpeechSubscriptionOptions*)Obj)->bUsePrivateEndpoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_bUsePrivateEndpoint = { "bUsePrivateEndpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAzSpeechSubscriptionOptions), &Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_bUsePrivateEndpoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_bUsePrivateEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_bUsePrivateEndpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_PrivateEndpoint_MetaData[] = {
		{ "Category", "Azure" },
		{ "DisplayName", "Private Endpoint" },
		{ "EditCondition", "bUsePrivateEndpoint" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_PrivateEndpoint = { "PrivateEndpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSubscriptionOptions, PrivateEndpoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_PrivateEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_PrivateEndpoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_SubscriptionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_RegionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_bUsePrivateEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewProp_PrivateEndpoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechSubscriptionOptions",
		sizeof(FAzSpeechSubscriptionOptions),
		alignof(FAzSpeechSubscriptionOptions),
		Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechSubscriptionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechSubscriptionOptions.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechSubscriptionOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechRecognitionOptions;
class UScriptStruct* FAzSpeechRecognitionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechRecognitionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechRecognitionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechRecognitionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechRecognitionOptions.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechRecognitionOptions>()
{
	return FAzSpeechRecognitionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locale_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Locale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLanguageIdentification_MetaData[];
#endif
		static void NewProp_bUseLanguageIdentification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLanguageIdentification;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageIdentificationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageIdentificationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageIdentificationMode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CandidateLanguages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CandidateLanguages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CandidateLanguages;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeechRecognitionOutputFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechRecognitionOutputFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeechRecognitionOutputFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProfanityFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfanityFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProfanityFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentationSilenceTimeoutMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SegmentationSilenceTimeoutMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceTimeoutMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialSilenceTimeoutMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechRecognitionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_Locale_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Locale" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionOptions, Locale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_Locale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_bUseLanguageIdentification_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Use Language Identification" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_bUseLanguageIdentification_SetBit(void* Obj)
	{
		((FAzSpeechRecognitionOptions*)Obj)->bUseLanguageIdentification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_bUseLanguageIdentification = { "bUseLanguageIdentification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAzSpeechRecognitionOptions), &Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_bUseLanguageIdentification_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_bUseLanguageIdentification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_bUseLanguageIdentification_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_LanguageIdentificationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_LanguageIdentificationMode_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Language Identification Mode" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_LanguageIdentificationMode = { "LanguageIdentificationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionOptions, LanguageIdentificationMode), Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_LanguageIdentificationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_LanguageIdentificationMode_MetaData)) }; // 4046602220
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_CandidateLanguages_Inner = { "CandidateLanguages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_CandidateLanguages_MetaData[] = {
		{ "Category", "Tasks" },
		{ "Comment", "/* Will use Azure SDK Language Identification */" },
		{ "DisplayName", "Candidate Languages" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "ToolTip", "Will use Azure SDK Language Identification" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_CandidateLanguages = { "CandidateLanguages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionOptions, CandidateLanguages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_CandidateLanguages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_CandidateLanguages_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SpeechRecognitionOutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SpeechRecognitionOutputFormat_MetaData[] = {
		{ "Category", "Tasks" },
		{ "Comment", "/* Recognition output format */" },
		{ "DisplayName", "Recognition Output Format" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "ToolTip", "Recognition output format" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SpeechRecognitionOutputFormat = { "SpeechRecognitionOutputFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionOptions, SpeechRecognitionOutputFormat), Z_Construct_UEnum_AzSpeech_EAzSpeechRecognitionOutputFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SpeechRecognitionOutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SpeechRecognitionOutputFormat_MetaData)) }; // 2718134123
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_ProfanityFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_ProfanityFilter_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Profanity Filter" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_ProfanityFilter = { "ProfanityFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionOptions, ProfanityFilter), Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_ProfanityFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_ProfanityFilter_MetaData)) }; // 1023517727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SegmentationSilenceTimeoutMs_MetaData[] = {
		{ "Category", "Tasks" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "100" },
		{ "Comment", "/* Silence time limit in miliseconds to consider the task as Completed */" },
		{ "DisplayName", "Segmentation Silence Timeout in Miliseconds" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "ToolTip", "Silence time limit in miliseconds to consider the task as Completed" },
		{ "UIMax", "5000" },
		{ "UIMin", "100" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SegmentationSilenceTimeoutMs = { "SegmentationSilenceTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionOptions, SegmentationSilenceTimeoutMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SegmentationSilenceTimeoutMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SegmentationSilenceTimeoutMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_InitialSilenceTimeoutMs_MetaData[] = {
		{ "Category", "Tasks" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Silence time limit in miliseconds at the start of the task to consider the result as Canceled/NoMatch */" },
		{ "DisplayName", "Initial Silence Timeout in Miliseconds" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "ToolTip", "Silence time limit in miliseconds at the start of the task to consider the result as Canceled/NoMatch" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_InitialSilenceTimeoutMs = { "InitialSilenceTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechRecognitionOptions, InitialSilenceTimeoutMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_InitialSilenceTimeoutMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_InitialSilenceTimeoutMs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_bUseLanguageIdentification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_LanguageIdentificationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_LanguageIdentificationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_CandidateLanguages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_CandidateLanguages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SpeechRecognitionOutputFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SpeechRecognitionOutputFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_ProfanityFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_ProfanityFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_SegmentationSilenceTimeoutMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewProp_InitialSilenceTimeoutMs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechRecognitionOptions",
		sizeof(FAzSpeechRecognitionOptions),
		alignof(FAzSpeechRecognitionOptions),
		Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechRecognitionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechRecognitionOptions.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechRecognitionOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechSynthesisOptions;
class UScriptStruct* FAzSpeechSynthesisOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechSynthesisOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechSynthesisOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechSynthesisOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechSynthesisOptions.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechSynthesisOptions>()
{
	return FAzSpeechSynthesisOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locale_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Locale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voice_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Voice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViseme_MetaData[];
#endif
		static void NewProp_bEnableViseme_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViseme;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeechSynthesisOutputFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechSynthesisOutputFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeechSynthesisOutputFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLanguageIdentification_MetaData[];
#endif
		static void NewProp_bUseLanguageIdentification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLanguageIdentification;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LanguageIdentificationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageIdentificationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LanguageIdentificationMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProfanityFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfanityFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProfanityFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechSynthesisOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Locale_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Locale" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSynthesisOptions, Locale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Locale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Voice_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Voice" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSynthesisOptions, Voice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Voice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Voice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bEnableViseme_MetaData[] = {
		{ "Category", "Tasks" },
		{ "Comment", "/* If enabled, tasks will generate Viseme data */" },
		{ "DisplayName", "Enable Viseme" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "ToolTip", "If enabled, tasks will generate Viseme data" },
	};
#endif
	void Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bEnableViseme_SetBit(void* Obj)
	{
		((FAzSpeechSynthesisOptions*)Obj)->bEnableViseme = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bEnableViseme = { "bEnableViseme", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAzSpeechSynthesisOptions), &Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bEnableViseme_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bEnableViseme_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bEnableViseme_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_SpeechSynthesisOutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_SpeechSynthesisOutputFormat_MetaData[] = {
		{ "Category", "Tasks" },
		{ "Comment", "/* Synthesis audio output format */" },
		{ "DisplayName", "Synthesis Output Format" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
		{ "ToolTip", "Synthesis audio output format" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_SpeechSynthesisOutputFormat = { "SpeechSynthesisOutputFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSynthesisOptions, SpeechSynthesisOutputFormat), Z_Construct_UEnum_AzSpeech_EAzSpeechSynthesisOutputFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_SpeechSynthesisOutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_SpeechSynthesisOutputFormat_MetaData)) }; // 3715566107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bUseLanguageIdentification_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Use Language Identification" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bUseLanguageIdentification_SetBit(void* Obj)
	{
		((FAzSpeechSynthesisOptions*)Obj)->bUseLanguageIdentification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bUseLanguageIdentification = { "bUseLanguageIdentification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAzSpeechSynthesisOptions), &Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bUseLanguageIdentification_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bUseLanguageIdentification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bUseLanguageIdentification_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_LanguageIdentificationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_LanguageIdentificationMode_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Language Identification Mode" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_LanguageIdentificationMode = { "LanguageIdentificationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSynthesisOptions, LanguageIdentificationMode), Z_Construct_UEnum_AzSpeech_EAzSpeechLanguageIdentificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_LanguageIdentificationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_LanguageIdentificationMode_MetaData)) }; // 4046602220
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_ProfanityFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_ProfanityFilter_MetaData[] = {
		{ "Category", "Tasks" },
		{ "DisplayName", "Profanity Filter" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_ProfanityFilter = { "ProfanityFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSynthesisOptions, ProfanityFilter), Z_Construct_UEnum_AzSpeech_EAzSpeechProfanityFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_ProfanityFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_ProfanityFilter_MetaData)) }; // 1023517727
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_Voice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bEnableViseme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_SpeechSynthesisOutputFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_SpeechSynthesisOutputFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_bUseLanguageIdentification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_LanguageIdentificationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_LanguageIdentificationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_ProfanityFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewProp_ProfanityFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechSynthesisOptions",
		sizeof(FAzSpeechSynthesisOptions),
		alignof(FAzSpeechSynthesisOptions),
		Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechSynthesisOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechSynthesisOptions.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechSynthesisOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechSettingsOptions;
class UScriptStruct* FAzSpeechSettingsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechSettingsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechSettingsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechSettingsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechSettingsOptions.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechSettingsOptions>()
{
	return FAzSpeechSettingsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubscriptionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubscriptionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecognitionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthesisOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechSettingsOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SubscriptionOptions_MetaData[] = {
		{ "Category", "Azure" },
		{ "DisplayName", "Subscription Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SubscriptionOptions = { "SubscriptionOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSettingsOptions, SubscriptionOptions), Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SubscriptionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SubscriptionOptions_MetaData)) }; // 3252570412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_RecognitionOptions_MetaData[] = {
		{ "Category", "Azure" },
		{ "DisplayName", "Recognition Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_RecognitionOptions = { "RecognitionOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSettingsOptions, RecognitionOptions), Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_RecognitionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_RecognitionOptions_MetaData)) }; // 1382201151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SynthesisOptions_MetaData[] = {
		{ "Category", "Azure" },
		{ "DisplayName", "Synthesis Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechSettingsOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SynthesisOptions = { "SynthesisOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechSettingsOptions, SynthesisOptions), Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SynthesisOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SynthesisOptions_MetaData)) }; // 2909106233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SubscriptionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_RecognitionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewProp_SynthesisOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechSettingsOptions",
		sizeof(FAzSpeechSettingsOptions),
		alignof(FAzSpeechSettingsOptions),
		Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSettingsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechSettingsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechSettingsOptions.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechSettingsOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_Statics::EnumInfo[] = {
		{ EAzSpeechProfanityFilter_StaticEnum, TEXT("EAzSpeechProfanityFilter"), &Z_Registration_Info_UEnum_EAzSpeechProfanityFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1023517727U) },
		{ EAzSpeechThreadPriority_StaticEnum, TEXT("EAzSpeechThreadPriority"), &Z_Registration_Info_UEnum_EAzSpeechThreadPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1637187169U) },
		{ EAzSpeechSynthesisOutputFormat_StaticEnum, TEXT("EAzSpeechSynthesisOutputFormat"), &Z_Registration_Info_UEnum_EAzSpeechSynthesisOutputFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3715566107U) },
		{ EAzSpeechRecognitionOutputFormat_StaticEnum, TEXT("EAzSpeechRecognitionOutputFormat"), &Z_Registration_Info_UEnum_EAzSpeechRecognitionOutputFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2718134123U) },
		{ EAzSpeechLanguageIdentificationMode_StaticEnum, TEXT("EAzSpeechLanguageIdentificationMode"), &Z_Registration_Info_UEnum_EAzSpeechLanguageIdentificationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4046602220U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_Statics::ScriptStructInfo[] = {
		{ FAzSpeechSubscriptionOptions::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions_Statics::NewStructOps, TEXT("AzSpeechSubscriptionOptions"), &Z_Registration_Info_UScriptStruct_AzSpeechSubscriptionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechSubscriptionOptions), 3252570412U) },
		{ FAzSpeechRecognitionOptions::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions_Statics::NewStructOps, TEXT("AzSpeechRecognitionOptions"), &Z_Registration_Info_UScriptStruct_AzSpeechRecognitionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechRecognitionOptions), 1382201151U) },
		{ FAzSpeechSynthesisOptions::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions_Statics::NewStructOps, TEXT("AzSpeechSynthesisOptions"), &Z_Registration_Info_UScriptStruct_AzSpeechSynthesisOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechSynthesisOptions), 2909106233U) },
		{ FAzSpeechSettingsOptions::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechSettingsOptions_Statics::NewStructOps, TEXT("AzSpeechSettingsOptions"), &Z_Registration_Info_UScriptStruct_AzSpeechSettingsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechSettingsOptions), 3721891201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_312484885(TEXT("/Script/AzSpeech"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechSettingsOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
