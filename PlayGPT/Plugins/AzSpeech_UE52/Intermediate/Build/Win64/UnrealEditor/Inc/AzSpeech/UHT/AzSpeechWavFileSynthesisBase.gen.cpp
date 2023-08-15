// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/Bases/AzSpeechWavFileSynthesisBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechWavFileSynthesisBase() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSynthesizerTaskBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechWavFileSynthesisBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_NoRegister();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	void UAzSpeechWavFileSynthesisBase::StaticRegisterNativesUAzSpeechWavFileSynthesisBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechWavFileSynthesisBase);
	UClass* Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_NoRegister()
	{
		return UAzSpeechWavFileSynthesisBase::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SynthesisCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechSynthesizerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AzSpeech/Tasks/Bases/AzSpeechWavFileSynthesisBase.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechWavFileSynthesisBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::NewProp_SynthesisCompleted_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when completed */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechWavFileSynthesisBase.h" },
		{ "ToolTip", "Task delegate that will be called when completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::NewProp_SynthesisCompleted = { "SynthesisCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechWavFileSynthesisBase, SynthesisCompleted), Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::NewProp_SynthesisCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::NewProp_SynthesisCompleted_MetaData)) }; // 2473787216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::NewProp_SynthesisCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechWavFileSynthesisBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::ClassParams = {
		&UAzSpeechWavFileSynthesisBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::PropPointers),
		0,
		0x009002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechWavFileSynthesisBase()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechWavFileSynthesisBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechWavFileSynthesisBase.OuterSingleton, Z_Construct_UClass_UAzSpeechWavFileSynthesisBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechWavFileSynthesisBase.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechWavFileSynthesisBase>()
	{
		return UAzSpeechWavFileSynthesisBase::StaticClass();
	}
	UAzSpeechWavFileSynthesisBase::UAzSpeechWavFileSynthesisBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechWavFileSynthesisBase);
	UAzSpeechWavFileSynthesisBase::~UAzSpeechWavFileSynthesisBase() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechWavFileSynthesisBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechWavFileSynthesisBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechWavFileSynthesisBase, UAzSpeechWavFileSynthesisBase::StaticClass, TEXT("UAzSpeechWavFileSynthesisBase"), &Z_Registration_Info_UClass_UAzSpeechWavFileSynthesisBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechWavFileSynthesisBase), 1404966983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechWavFileSynthesisBase_h_2182518960(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechWavFileSynthesisBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechWavFileSynthesisBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
