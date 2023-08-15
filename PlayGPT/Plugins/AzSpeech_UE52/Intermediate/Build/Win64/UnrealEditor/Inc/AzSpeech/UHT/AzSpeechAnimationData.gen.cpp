// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Structures/AzSpeechAnimationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechAnimationData() {}
// Cross Module References
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechAnimationData();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechBlendShapes();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechBlendShapes;
class UScriptStruct* FAzSpeechBlendShapes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechBlendShapes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechBlendShapes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechBlendShapes, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechBlendShapes"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechBlendShapes.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechBlendShapes>()
{
	return FAzSpeechBlendShapes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechAnimationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechBlendShapes>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechAnimationData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechBlendShapes, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechBlendShapes",
		sizeof(FAzSpeechBlendShapes),
		alignof(FAzSpeechBlendShapes),
		Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechBlendShapes()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechBlendShapes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechBlendShapes.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechBlendShapes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzSpeechAnimationData;
class UScriptStruct* FAzSpeechAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzSpeechAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzSpeechAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzSpeechAnimationData, (UObject*)Z_Construct_UPackage__Script_AzSpeech(), TEXT("AzSpeechAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_AzSpeechAnimationData.OuterSingleton;
}
template<> AZSPEECH_API UScriptStruct* StaticStruct<FAzSpeechAnimationData>()
{
	return FAzSpeechAnimationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShapes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechAnimationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzSpeechAnimationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_FrameIndex_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechAnimationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechAnimationData, FrameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_FrameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_FrameIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_BlendShapes_Inner = { "BlendShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechBlendShapes, METADATA_PARAMS(nullptr, 0) }; // 438373457
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_BlendShapes_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Structures/AzSpeechAnimationData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_BlendShapes = { "BlendShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzSpeechAnimationData, BlendShapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_BlendShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_BlendShapes_MetaData)) }; // 438373457
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_FrameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_BlendShapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewProp_BlendShapes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
		nullptr,
		&NewStructOps,
		"AzSpeechAnimationData",
		sizeof(FAzSpeechAnimationData),
		alignof(FAzSpeechAnimationData),
		Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechAnimationData()
	{
		if (!Z_Registration_Info_UScriptStruct_AzSpeechAnimationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzSpeechAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzSpeechAnimationData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAnimationData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAnimationData_h_Statics::ScriptStructInfo[] = {
		{ FAzSpeechBlendShapes::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechBlendShapes_Statics::NewStructOps, TEXT("AzSpeechBlendShapes"), &Z_Registration_Info_UScriptStruct_AzSpeechBlendShapes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechBlendShapes), 438373457U) },
		{ FAzSpeechAnimationData::StaticStruct, Z_Construct_UScriptStruct_FAzSpeechAnimationData_Statics::NewStructOps, TEXT("AzSpeechAnimationData"), &Z_Registration_Info_UScriptStruct_AzSpeechAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzSpeechAnimationData), 911539369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAnimationData_h_3931984661(TEXT("/Script/AzSpeech"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAnimationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Structures_AzSpeechAnimationData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
