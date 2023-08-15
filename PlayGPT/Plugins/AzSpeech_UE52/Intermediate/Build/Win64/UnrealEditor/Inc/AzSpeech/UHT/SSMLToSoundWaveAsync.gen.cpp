// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/SSMLToSoundWaveAsync.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMLToSoundWaveAsync() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase();
	AZSPEECH_API UClass* Z_Construct_UClass_USSMLToSoundWaveAsync();
	AZSPEECH_API UClass* Z_Construct_UClass_USSMLToSoundWaveAsync_NoRegister();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(USSMLToSoundWaveAsync::execSSMLToSoundWave_CustomOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FAzSpeechSubscriptionOptions,Z_Param_SubscriptionOptions);
		P_GET_STRUCT(FAzSpeechSynthesisOptions,Z_Param_SynthesisOptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_SynthesisSSML);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USSMLToSoundWaveAsync**)Z_Param__Result=USSMLToSoundWaveAsync::SSMLToSoundWave_CustomOptions(Z_Param_WorldContextObject,Z_Param_SubscriptionOptions,Z_Param_SynthesisOptions,Z_Param_SynthesisSSML);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USSMLToSoundWaveAsync::execSSMLToSoundWave_DefaultOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SynthesisSSML);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USSMLToSoundWaveAsync**)Z_Param__Result=USSMLToSoundWaveAsync::SSMLToSoundWave_DefaultOptions(Z_Param_WorldContextObject,Z_Param_SynthesisSSML);
		P_NATIVE_END;
	}
	void USSMLToSoundWaveAsync::StaticRegisterNativesUSSMLToSoundWaveAsync()
	{
		UClass* Class = USSMLToSoundWaveAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SSMLToSoundWave_CustomOptions", &USSMLToSoundWaveAsync::execSSMLToSoundWave_CustomOptions },
			{ "SSMLToSoundWave_DefaultOptions", &USSMLToSoundWaveAsync::execSSMLToSoundWave_DefaultOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics
	{
		struct SSMLToSoundWaveAsync_eventSSMLToSoundWave_CustomOptions_Parms
		{
			UObject* WorldContextObject;
			FAzSpeechSubscriptionOptions SubscriptionOptions;
			FAzSpeechSynthesisOptions SynthesisOptions;
			FString SynthesisSSML;
			USSMLToSoundWaveAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubscriptionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubscriptionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthesisOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisSSML_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SynthesisSSML;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SSMLToSoundWaveAsync_eventSSMLToSoundWave_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SubscriptionOptions = { "SubscriptionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SSMLToSoundWaveAsync_eventSSMLToSoundWave_CustomOptions_Parms, SubscriptionOptions), Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, METADATA_PARAMS(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData)) }; // 3252570412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisOptions = { "SynthesisOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SSMLToSoundWaveAsync_eventSSMLToSoundWave_CustomOptions_Parms, SynthesisOptions), Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions, METADATA_PARAMS(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData)) }; // 2909106233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisSSML_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisSSML = { "SynthesisSSML", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SSMLToSoundWaveAsync_eventSSMLToSoundWave_CustomOptions_Parms, SynthesisSSML), METADATA_PARAMS(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisSSML_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisSSML_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SSMLToSoundWaveAsync_eventSSMLToSoundWave_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_USSMLToSoundWaveAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SubscriptionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_SynthesisSSML,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Custom" },
		{ "Comment", "/* Creates a SSML-To-SoundWave task that will convert your SSML file to a USoundWave */" },
		{ "DisplayName", "SSML To Sound Wave with Custom Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/SSMLToSoundWaveAsync.h" },
		{ "ToolTip", "Creates a SSML-To-SoundWave task that will convert your SSML file to a USoundWave" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMLToSoundWaveAsync, nullptr, "SSMLToSoundWave_CustomOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::SSMLToSoundWaveAsync_eventSSMLToSoundWave_CustomOptions_Parms), Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics
	{
		struct SSMLToSoundWaveAsync_eventSSMLToSoundWave_DefaultOptions_Parms
		{
			UObject* WorldContextObject;
			FString SynthesisSSML;
			USSMLToSoundWaveAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisSSML_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SynthesisSSML;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SSMLToSoundWaveAsync_eventSSMLToSoundWave_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_SynthesisSSML_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_SynthesisSSML = { "SynthesisSSML", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SSMLToSoundWaveAsync_eventSSMLToSoundWave_DefaultOptions_Parms, SynthesisSSML), METADATA_PARAMS(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_SynthesisSSML_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_SynthesisSSML_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SSMLToSoundWaveAsync_eventSSMLToSoundWave_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_USSMLToSoundWaveAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_SynthesisSSML,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Default" },
		{ "Comment", "/* Creates a SSML-To-SoundWave task that will convert your SSML file to a USoundWave */" },
		{ "DisplayName", "SSML To Sound Wave with Default Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/SSMLToSoundWaveAsync.h" },
		{ "ToolTip", "Creates a SSML-To-SoundWave task that will convert your SSML file to a USoundWave" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USSMLToSoundWaveAsync, nullptr, "SSMLToSoundWave_DefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::SSMLToSoundWaveAsync_eventSSMLToSoundWave_DefaultOptions_Parms), Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USSMLToSoundWaveAsync);
	UClass* Z_Construct_UClass_USSMLToSoundWaveAsync_NoRegister()
	{
		return USSMLToSoundWaveAsync::StaticClass();
	}
	struct Z_Construct_UClass_USSMLToSoundWaveAsync_Statics
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
	UObject* (*const Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechAudioDataSynthesisBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_CustomOptions, "SSMLToSoundWave_CustomOptions" }, // 4157168065
		{ &Z_Construct_UFunction_USSMLToSoundWaveAsync_SSMLToSoundWave_DefaultOptions, "SSMLToSoundWave_DefaultOptions" }, // 1197684803
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/SSMLToSoundWaveAsync.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/SSMLToSoundWaveAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::NewProp_SynthesisCompleted_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when completed */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/SSMLToSoundWaveAsync.h" },
		{ "ToolTip", "Task delegate that will be called when completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::NewProp_SynthesisCompleted = { "SynthesisCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USSMLToSoundWaveAsync, SynthesisCompleted), Z_Construct_UDelegateFunction_AzSpeech_SoundWaveSynthesisDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::NewProp_SynthesisCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::NewProp_SynthesisCompleted_MetaData)) }; // 1555588756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::NewProp_SynthesisCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USSMLToSoundWaveAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::ClassParams = {
		&USSMLToSoundWaveAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USSMLToSoundWaveAsync()
	{
		if (!Z_Registration_Info_UClass_USSMLToSoundWaveAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USSMLToSoundWaveAsync.OuterSingleton, Z_Construct_UClass_USSMLToSoundWaveAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USSMLToSoundWaveAsync.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<USSMLToSoundWaveAsync>()
	{
		return USSMLToSoundWaveAsync::StaticClass();
	}
	USSMLToSoundWaveAsync::USSMLToSoundWaveAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USSMLToSoundWaveAsync);
	USSMLToSoundWaveAsync::~USSMLToSoundWaveAsync() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToSoundWaveAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToSoundWaveAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USSMLToSoundWaveAsync, USSMLToSoundWaveAsync::StaticClass, TEXT("USSMLToSoundWaveAsync"), &Z_Registration_Info_UClass_USSMLToSoundWaveAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USSMLToSoundWaveAsync), 2419558957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToSoundWaveAsync_h_476164962(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToSoundWaveAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SSMLToSoundWaveAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
