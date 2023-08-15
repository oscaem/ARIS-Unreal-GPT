// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeechEditor/Private/SAzSpeechAudioGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAzSpeechAudioGenerator() {}
// Cross Module References
	AZSPEECHEDITOR_API UClass* Z_Construct_UClass_UAzSpeechPropertiesGetter();
	AZSPEECHEDITOR_API UClass* Z_Construct_UClass_UAzSpeechPropertiesGetter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AzSpeechEditor();
// End Cross Module References
	DEFINE_FUNCTION(UAzSpeechPropertiesGetter::execTaskFail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TaskFail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechPropertiesGetter::execSynthesisCompleted)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SynthesisCompleted(Z_Param_Out_AudioData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechPropertiesGetter::execOnAvailableVoicesChanged)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Voices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvailableVoicesChanged(Z_Param_Out_Voices);
		P_NATIVE_END;
	}
	void UAzSpeechPropertiesGetter::StaticRegisterNativesUAzSpeechPropertiesGetter()
	{
		UClass* Class = UAzSpeechPropertiesGetter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAvailableVoicesChanged", &UAzSpeechPropertiesGetter::execOnAvailableVoicesChanged },
			{ "SynthesisCompleted", &UAzSpeechPropertiesGetter::execSynthesisCompleted },
			{ "TaskFail", &UAzSpeechPropertiesGetter::execTaskFail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics
	{
		struct AzSpeechPropertiesGetter_eventOnAvailableVoicesChanged_Parms
		{
			TArray<FString> Voices;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Voices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Voices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::NewProp_Voices_Inner = { "Voices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::NewProp_Voices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::NewProp_Voices = { "Voices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechPropertiesGetter_eventOnAvailableVoicesChanged_Parms, Voices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::NewProp_Voices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::NewProp_Voices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::NewProp_Voices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::NewProp_Voices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SAzSpeechAudioGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechPropertiesGetter, nullptr, "OnAvailableVoicesChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::AzSpeechPropertiesGetter_eventOnAvailableVoicesChanged_Parms), Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics
	{
		struct AzSpeechPropertiesGetter_eventSynthesisCompleted_Parms
		{
			TArray<uint8> AudioData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechPropertiesGetter_eventSynthesisCompleted_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::NewProp_AudioData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::NewProp_AudioData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::NewProp_AudioData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::NewProp_AudioData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SAzSpeechAudioGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechPropertiesGetter, nullptr, "SynthesisCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::AzSpeechPropertiesGetter_eventSynthesisCompleted_Parms), Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechPropertiesGetter_TaskFail_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechPropertiesGetter_TaskFail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SAzSpeechAudioGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechPropertiesGetter_TaskFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechPropertiesGetter, nullptr, "TaskFail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechPropertiesGetter_TaskFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechPropertiesGetter_TaskFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechPropertiesGetter_TaskFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechPropertiesGetter_TaskFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechPropertiesGetter);
	UClass* Z_Construct_UClass_UAzSpeechPropertiesGetter_NoRegister()
	{
		return UAzSpeechPropertiesGetter::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeechEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzSpeechPropertiesGetter_OnAvailableVoicesChanged, "OnAvailableVoicesChanged" }, // 1221509998
		{ &Z_Construct_UFunction_UAzSpeechPropertiesGetter_SynthesisCompleted, "SynthesisCompleted" }, // 2692249532
		{ &Z_Construct_UFunction_UAzSpeechPropertiesGetter_TaskFail, "TaskFail" }, // 2574240072
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics::Class_MetaDataParams[] = {
		{ "Category", "Implementation" },
		{ "IncludePath", "SAzSpeechAudioGenerator.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/SAzSpeechAudioGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechPropertiesGetter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics::ClassParams = {
		&UAzSpeechPropertiesGetter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechPropertiesGetter()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechPropertiesGetter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechPropertiesGetter.OuterSingleton, Z_Construct_UClass_UAzSpeechPropertiesGetter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechPropertiesGetter.OuterSingleton;
	}
	template<> AZSPEECHEDITOR_API UClass* StaticClass<UAzSpeechPropertiesGetter>()
	{
		return UAzSpeechPropertiesGetter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechPropertiesGetter);
	UAzSpeechPropertiesGetter::~UAzSpeechPropertiesGetter() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeechEditor_Private_SAzSpeechAudioGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeechEditor_Private_SAzSpeechAudioGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechPropertiesGetter, UAzSpeechPropertiesGetter::StaticClass, TEXT("UAzSpeechPropertiesGetter"), &Z_Registration_Info_UClass_UAzSpeechPropertiesGetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechPropertiesGetter), 1492193910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeechEditor_Private_SAzSpeechAudioGenerator_h_3679707837(TEXT("/Script/AzSpeechEditor"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeechEditor_Private_SAzSpeechAudioGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeechEditor_Private_SAzSpeechAudioGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
