// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/RecognitionMapCheckAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecognitionMapCheckAsync() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_URecognitionMapCheckAsync();
	AZSPEECH_API UClass* Z_Construct_UClass_URecognitionMapCheckAsync_NoRegister();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/RecognitionMapCheckAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "AzSpeechMapCheckDelegate_Generic__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAzSpeechMapCheckDelegate_Generic_DelegateWrapper(const FMulticastScriptDelegate& AzSpeechMapCheckDelegate_Generic)
{
	AzSpeechMapCheckDelegate_Generic.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics
	{
		struct _Script_AzSpeech_eventAzSpeechMapCheckDelegate_WithValue_Parms
		{
			int32 RecognitionResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionResult_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecognitionResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::NewProp_RecognitionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::NewProp_RecognitionResult = { "RecognitionResult", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AzSpeech_eventAzSpeechMapCheckDelegate_WithValue_Parms, RecognitionResult), METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::NewProp_RecognitionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::NewProp_RecognitionResult_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::NewProp_RecognitionResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/RecognitionMapCheckAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "AzSpeechMapCheckDelegate_WithValue__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::_Script_AzSpeech_eventAzSpeechMapCheckDelegate_WithValue_Parms), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAzSpeechMapCheckDelegate_WithValue_DelegateWrapper(const FMulticastScriptDelegate& AzSpeechMapCheckDelegate_WithValue, const int32 RecognitionResult)
{
	struct _Script_AzSpeech_eventAzSpeechMapCheckDelegate_WithValue_Parms
	{
		int32 RecognitionResult;
	};
	_Script_AzSpeech_eventAzSpeechMapCheckDelegate_WithValue_Parms Parms;
	Parms.RecognitionResult=RecognitionResult;
	AzSpeechMapCheckDelegate_WithValue.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(URecognitionMapCheckAsync::execRecognitionMapCheckAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_GET_UBOOL(Z_Param_bStopAtFirstTrigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URecognitionMapCheckAsync**)Z_Param__Result=URecognitionMapCheckAsync::RecognitionMapCheckAsync(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_GroupName,Z_Param_bStopAtFirstTrigger);
		P_NATIVE_END;
	}
	void URecognitionMapCheckAsync::StaticRegisterNativesURecognitionMapCheckAsync()
	{
		UClass* Class = URecognitionMapCheckAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RecognitionMapCheckAsync", &URecognitionMapCheckAsync::execRecognitionMapCheckAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics
	{
		struct RecognitionMapCheckAsync_eventRecognitionMapCheckAsync_Parms
		{
			UObject* WorldContextObject;
			FString InString;
			FName GroupName;
			bool bStopAtFirstTrigger;
			URecognitionMapCheckAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopAtFirstTrigger_MetaData[];
#endif
		static void NewProp_bStopAtFirstTrigger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAtFirstTrigger;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecognitionMapCheckAsync_eventRecognitionMapCheckAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecognitionMapCheckAsync_eventRecognitionMapCheckAsync_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_InString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_GroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecognitionMapCheckAsync_eventRecognitionMapCheckAsync_Parms, GroupName), METADATA_PARAMS(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_bStopAtFirstTrigger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_bStopAtFirstTrigger_SetBit(void* Obj)
	{
		((RecognitionMapCheckAsync_eventRecognitionMapCheckAsync_Parms*)Obj)->bStopAtFirstTrigger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_bStopAtFirstTrigger = { "bStopAtFirstTrigger", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RecognitionMapCheckAsync_eventRecognitionMapCheckAsync_Parms), &Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_bStopAtFirstTrigger_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_bStopAtFirstTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_bStopAtFirstTrigger_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RecognitionMapCheckAsync_eventRecognitionMapCheckAsync_Parms, ReturnValue), Z_Construct_UClass_URecognitionMapCheckAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_bStopAtFirstTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Search in the recognition map for the key that best matches with the input string and return the registered value (See Project Settings -> AzSpeech: Recognition Map) */" },
		{ "CPP_Default_bStopAtFirstTrigger", "false" },
		{ "DisplayName", "Check Return from Recognition Map" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/RecognitionMapCheckAsync.h" },
		{ "ToolTip", "Search in the recognition map for the key that best matches with the input string and return the registered value (See Project Settings -> AzSpeech: Recognition Map)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URecognitionMapCheckAsync, nullptr, "RecognitionMapCheckAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::RecognitionMapCheckAsync_eventRecognitionMapCheckAsync_Parms), Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecognitionMapCheckAsync);
	UClass* Z_Construct_UClass_URecognitionMapCheckAsync_NoRegister()
	{
		return URecognitionMapCheckAsync::StaticClass();
	}
	struct Z_Construct_UClass_URecognitionMapCheckAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Found_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Found;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotFound_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NotFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecognitionMapCheckAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URecognitionMapCheckAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URecognitionMapCheckAsync_RecognitionMapCheckAsync, "RecognitionMapCheckAsync" }, // 1180288707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecognitionMapCheckAsync_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/RecognitionMapCheckAsync.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/RecognitionMapCheckAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_Found_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when a value is found in the recognition data */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/RecognitionMapCheckAsync.h" },
		{ "ToolTip", "Task delegate that will be called when a value is found in the recognition data" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecognitionMapCheckAsync, Found), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_WithValue__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_Found_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_Found_MetaData)) }; // 3635155177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_NotFound_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when the task doesn't found any value that match the recognition data in the given group */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/RecognitionMapCheckAsync.h" },
		{ "ToolTip", "Task delegate that will be called when the task doesn't found any value that match the recognition data in the given group" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_NotFound = { "NotFound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecognitionMapCheckAsync, NotFound), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechMapCheckDelegate_Generic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_NotFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_NotFound_MetaData)) }; // 4091354186
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecognitionMapCheckAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_Found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecognitionMapCheckAsync_Statics::NewProp_NotFound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecognitionMapCheckAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecognitionMapCheckAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URecognitionMapCheckAsync_Statics::ClassParams = {
		&URecognitionMapCheckAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URecognitionMapCheckAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URecognitionMapCheckAsync_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_URecognitionMapCheckAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecognitionMapCheckAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecognitionMapCheckAsync()
	{
		if (!Z_Registration_Info_UClass_URecognitionMapCheckAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecognitionMapCheckAsync.OuterSingleton, Z_Construct_UClass_URecognitionMapCheckAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URecognitionMapCheckAsync.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<URecognitionMapCheckAsync>()
	{
		return URecognitionMapCheckAsync::StaticClass();
	}
	URecognitionMapCheckAsync::URecognitionMapCheckAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecognitionMapCheckAsync);
	URecognitionMapCheckAsync::~URecognitionMapCheckAsync() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_RecognitionMapCheckAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_RecognitionMapCheckAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URecognitionMapCheckAsync, URecognitionMapCheckAsync::StaticClass, TEXT("URecognitionMapCheckAsync"), &Z_Registration_Info_UClass_URecognitionMapCheckAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecognitionMapCheckAsync), 650991424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_RecognitionMapCheckAsync_h_169714591(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_RecognitionMapCheckAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_RecognitionMapCheckAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
