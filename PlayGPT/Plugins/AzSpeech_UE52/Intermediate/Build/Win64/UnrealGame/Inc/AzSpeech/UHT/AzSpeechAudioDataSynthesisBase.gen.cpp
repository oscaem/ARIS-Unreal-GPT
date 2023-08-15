// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/Bases/AzSpeechAudioDataSynthesisBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechAudioDataSynthesisBase() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_NoRegister();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSynthesizerTaskBase();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	void UAzSpeechAudioDataSynthesisBase::StaticRegisterNativesUAzSpeechAudioDataSynthesisBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechAudioDataSynthesisBase);
	UClass* Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_NoRegister()
	{
		return UAzSpeechAudioDataSynthesisBase::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AzSpeech/Tasks/Bases/AzSpeechAudioDataSynthesisBase.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechAudioDataSynthesisBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechAudioDataSynthesisBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_Statics::ClassParams = {
		&UAzSpeechAudioDataSynthesisBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechAudioDataSynthesisBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechAudioDataSynthesisBase.OuterSingleton, Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechAudioDataSynthesisBase.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechAudioDataSynthesisBase>()
	{
		return UAzSpeechAudioDataSynthesisBase::StaticClass();
	}
	UAzSpeechAudioDataSynthesisBase::UAzSpeechAudioDataSynthesisBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechAudioDataSynthesisBase);
	UAzSpeechAudioDataSynthesisBase::~UAzSpeechAudioDataSynthesisBase() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechAudioDataSynthesisBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechAudioDataSynthesisBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase, UAzSpeechAudioDataSynthesisBase::StaticClass, TEXT("UAzSpeechAudioDataSynthesisBase"), &Z_Registration_Info_UClass_UAzSpeechAudioDataSynthesisBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechAudioDataSynthesisBase), 2251797703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechAudioDataSynthesisBase_h_1596633435(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechAudioDataSynthesisBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechAudioDataSynthesisBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
