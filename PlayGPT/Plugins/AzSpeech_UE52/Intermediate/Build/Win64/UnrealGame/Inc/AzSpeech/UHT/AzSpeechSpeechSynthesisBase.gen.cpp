// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/Bases/AzSpeechSpeechSynthesisBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechSpeechSynthesisBase() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSpeechSynthesisBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_NoRegister();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioComponentPlayState();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(UAzSpeechSpeechSynthesisBase::execOnAudioPlayStateChanged)
	{
		P_GET_ENUM(EAudioComponentPlayState,Z_Param_PlayState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAudioPlayStateChanged(EAudioComponentPlayState(Z_Param_PlayState));
		P_NATIVE_END;
	}
	void UAzSpeechSpeechSynthesisBase::StaticRegisterNativesUAzSpeechSpeechSynthesisBase()
	{
		UClass* Class = UAzSpeechSpeechSynthesisBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAudioPlayStateChanged", &UAzSpeechSpeechSynthesisBase::execOnAudioPlayStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics
	{
		struct AzSpeechSpeechSynthesisBase_eventOnAudioPlayStateChanged_Parms
		{
			EAudioComponentPlayState PlayState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::NewProp_PlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::NewProp_PlayState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::NewProp_PlayState = { "PlayState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechSpeechSynthesisBase_eventOnAudioPlayStateChanged_Parms, PlayState), Z_Construct_UEnum_Engine_EAudioComponentPlayState, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::NewProp_PlayState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::NewProp_PlayState_MetaData)) }; // 1692706153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::NewProp_PlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::NewProp_PlayState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSpeechSynthesisBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechSpeechSynthesisBase, nullptr, "OnAudioPlayStateChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::AzSpeechSpeechSynthesisBase_eventOnAudioPlayStateChanged_Parms), Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechSpeechSynthesisBase);
	UClass* Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_NoRegister()
	{
		return UAzSpeechSpeechSynthesisBase::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzSpeechSpeechSynthesisBase_OnAudioPlayStateChanged, "OnAudioPlayStateChanged" }, // 3355805502
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AzSpeech/Tasks/Bases/AzSpeechSpeechSynthesisBase.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSpeechSynthesisBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::NewProp_SynthesisCompleted_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when completed */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechSpeechSynthesisBase.h" },
		{ "ToolTip", "Task delegate that will be called when completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::NewProp_SynthesisCompleted = { "SynthesisCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzSpeechSpeechSynthesisBase, SynthesisCompleted), Z_Construct_UDelegateFunction_AzSpeech_BooleanSynthesisDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::NewProp_SynthesisCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::NewProp_SynthesisCompleted_MetaData)) }; // 2473787216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::NewProp_SynthesisCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechSpeechSynthesisBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::ClassParams = {
		&UAzSpeechSpeechSynthesisBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::PropPointers),
		0,
		0x009002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechSpeechSynthesisBase()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechSpeechSynthesisBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechSpeechSynthesisBase.OuterSingleton, Z_Construct_UClass_UAzSpeechSpeechSynthesisBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechSpeechSynthesisBase.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechSpeechSynthesisBase>()
	{
		return UAzSpeechSpeechSynthesisBase::StaticClass();
	}
	UAzSpeechSpeechSynthesisBase::UAzSpeechSpeechSynthesisBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechSpeechSynthesisBase);
	UAzSpeechSpeechSynthesisBase::~UAzSpeechSpeechSynthesisBase() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechSpeechSynthesisBase, UAzSpeechSpeechSynthesisBase::StaticClass, TEXT("UAzSpeechSpeechSynthesisBase"), &Z_Registration_Info_UClass_UAzSpeechSpeechSynthesisBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechSpeechSynthesisBase), 2220043391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_2410689112(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechSpeechSynthesisBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
