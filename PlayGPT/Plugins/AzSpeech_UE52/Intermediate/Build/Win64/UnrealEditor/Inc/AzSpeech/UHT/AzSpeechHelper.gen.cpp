// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/AzSpeechHelper.h"
#include "AzSpeech/Structures/AzSpeechAnimationData.h"
#include "AzSpeech/Structures/AzSpeechAudioInputDeviceInfo.h"
#include "AzSpeech/Structures/AzSpeechVisemeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechHelper() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechHelper();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechHelper_NoRegister();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechRecognizerTaskBase_NoRegister();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_NoRegister();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechTaskBase_NoRegister();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechAnimationData();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechVisemeData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(UAzSpeechHelper::execCastToAzSpeechSynthesizerTaskBase)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAzSpeechSynthesizerTaskBase**)Z_Param__Result=UAzSpeechHelper::CastToAzSpeechSynthesizerTaskBase(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execCastToAzSpeechRecognizerTaskBase)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAzSpeechRecognizerTaskBase**)Z_Param__Result=UAzSpeechHelper::CastToAzSpeechRecognizerTaskBase(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execCastToAzSpeechTaskBase)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAzSpeechTaskBase**)Z_Param__Result=UAzSpeechHelper::CastToAzSpeechTaskBase(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execExtractAnimationDataFromVisemeDataArray)
	{
		P_GET_TARRAY_REF(FAzSpeechVisemeData,Z_Param_Out_VisemeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAzSpeechAnimationData>*)Z_Param__Result=UAzSpeechHelper::ExtractAnimationDataFromVisemeDataArray(Z_Param_Out_VisemeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execExtractAnimationDataFromVisemeData)
	{
		P_GET_STRUCT_REF(FAzSpeechVisemeData,Z_Param_Out_VisemeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzSpeechAnimationData*)Z_Param__Result=UAzSpeechHelper::ExtractAnimationDataFromVisemeData(Z_Param_Out_VisemeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execGetPluginVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::GetPluginVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execGetPluginFriendlyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::GetPluginFriendlyName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execIsContentModuleAvailable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModuleName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechHelper::IsContentModuleAvailable(Z_Param_ModuleName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execGetAvailableContentModules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UAzSpeechHelper::GetAvailableContentModules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execIsAudioInputDeviceIDValid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechHelper::IsAudioInputDeviceIDValid(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execIsAudioInputDeviceAvailable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechHelper::IsAudioInputDeviceAvailable(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execGetAudioInputDeviceInfoFromID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzSpeechAudioInputDeviceInfo*)Z_Param__Result=UAzSpeechHelper::GetAudioInputDeviceInfoFromID(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execGetAvailableAudioInputDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAzSpeechAudioInputDeviceInfo>*)Z_Param__Result=UAzSpeechHelper::GetAvailableAudioInputDevices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execIsAudioDataValid)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_RawData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechHelper::IsAudioDataValid(Z_Param_Out_RawData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execCheckAndroidPermission)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPermission);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechHelper::CheckAndroidPermission(Z_Param_InPermission);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execOpenDesktopFolderPicker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::OpenDesktopFolderPicker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execCreateNewDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_bCreateParents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechHelper::CreateNewDirectory(Z_Param_Path,Z_Param_bCreateParents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execLoadXMLToString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::LoadXMLToString(Z_Param_FilePath,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execConvertAudioDataToSoundWave)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_RawData);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputModule);
		P_GET_PROPERTY(FStrProperty,Z_Param_RelativeOutputDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=UAzSpeechHelper::ConvertAudioDataToSoundWave(Z_Param_Out_RawData,Z_Param_OutputModule,Z_Param_RelativeOutputDirectory,Z_Param_OutputAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execConvertWavFileToSoundWave)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputModule);
		P_GET_PROPERTY(FStrProperty,Z_Param_RelativeOutputDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=UAzSpeechHelper::ConvertWavFileToSoundWave(Z_Param_FilePath,Z_Param_FileName,Z_Param_OutputModule,Z_Param_RelativeOutputDirectory,Z_Param_OutputAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execQualifyXMLFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::QualifyXMLFileName(Z_Param_Path,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execQualifyWAVFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::QualifyWAVFileName(Z_Param_Path,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execQualifyFileExtension)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Extension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::QualifyFileExtension(Z_Param_Path,Z_Param_Name,Z_Param_Extension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execQualifyPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::QualifyPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechHelper::execQualifyModulePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModuleName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAzSpeechHelper::QualifyModulePath(Z_Param_ModuleName);
		P_NATIVE_END;
	}
	void UAzSpeechHelper::StaticRegisterNativesUAzSpeechHelper()
	{
		UClass* Class = UAzSpeechHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToAzSpeechRecognizerTaskBase", &UAzSpeechHelper::execCastToAzSpeechRecognizerTaskBase },
			{ "CastToAzSpeechSynthesizerTaskBase", &UAzSpeechHelper::execCastToAzSpeechSynthesizerTaskBase },
			{ "CastToAzSpeechTaskBase", &UAzSpeechHelper::execCastToAzSpeechTaskBase },
			{ "CheckAndroidPermission", &UAzSpeechHelper::execCheckAndroidPermission },
			{ "ConvertAudioDataToSoundWave", &UAzSpeechHelper::execConvertAudioDataToSoundWave },
			{ "ConvertWavFileToSoundWave", &UAzSpeechHelper::execConvertWavFileToSoundWave },
			{ "CreateNewDirectory", &UAzSpeechHelper::execCreateNewDirectory },
			{ "ExtractAnimationDataFromVisemeData", &UAzSpeechHelper::execExtractAnimationDataFromVisemeData },
			{ "ExtractAnimationDataFromVisemeDataArray", &UAzSpeechHelper::execExtractAnimationDataFromVisemeDataArray },
			{ "GetAudioInputDeviceInfoFromID", &UAzSpeechHelper::execGetAudioInputDeviceInfoFromID },
			{ "GetAvailableAudioInputDevices", &UAzSpeechHelper::execGetAvailableAudioInputDevices },
			{ "GetAvailableContentModules", &UAzSpeechHelper::execGetAvailableContentModules },
			{ "GetPluginFriendlyName", &UAzSpeechHelper::execGetPluginFriendlyName },
			{ "GetPluginVersion", &UAzSpeechHelper::execGetPluginVersion },
			{ "IsAudioDataValid", &UAzSpeechHelper::execIsAudioDataValid },
			{ "IsAudioInputDeviceAvailable", &UAzSpeechHelper::execIsAudioInputDeviceAvailable },
			{ "IsAudioInputDeviceIDValid", &UAzSpeechHelper::execIsAudioInputDeviceIDValid },
			{ "IsContentModuleAvailable", &UAzSpeechHelper::execIsContentModuleAvailable },
			{ "LoadXMLToString", &UAzSpeechHelper::execLoadXMLToString },
			{ "OpenDesktopFolderPicker", &UAzSpeechHelper::execOpenDesktopFolderPicker },
			{ "QualifyFileExtension", &UAzSpeechHelper::execQualifyFileExtension },
			{ "QualifyModulePath", &UAzSpeechHelper::execQualifyModulePath },
			{ "QualifyPath", &UAzSpeechHelper::execQualifyPath },
			{ "QualifyWAVFileName", &UAzSpeechHelper::execQualifyWAVFileName },
			{ "QualifyXMLFileName", &UAzSpeechHelper::execQualifyXMLFileName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics
	{
		struct AzSpeechHelper_eventCastToAzSpeechRecognizerTaskBase_Parms
		{
			UObject* Object;
			UAzSpeechRecognizerTaskBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventCastToAzSpeechRecognizerTaskBase_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventCastToAzSpeechRecognizerTaskBase_Parms, ReturnValue), Z_Construct_UClass_UAzSpeechRecognizerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Casting" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "CastToAzSpeechRecognizerTaskBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::AzSpeechHelper_eventCastToAzSpeechRecognizerTaskBase_Parms), Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics
	{
		struct AzSpeechHelper_eventCastToAzSpeechSynthesizerTaskBase_Parms
		{
			UObject* Object;
			UAzSpeechSynthesizerTaskBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventCastToAzSpeechSynthesizerTaskBase_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventCastToAzSpeechSynthesizerTaskBase_Parms, ReturnValue), Z_Construct_UClass_UAzSpeechSynthesizerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Casting" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "CastToAzSpeechSynthesizerTaskBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::AzSpeechHelper_eventCastToAzSpeechSynthesizerTaskBase_Parms), Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics
	{
		struct AzSpeechHelper_eventCastToAzSpeechTaskBase_Parms
		{
			UObject* Object;
			UAzSpeechTaskBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventCastToAzSpeechTaskBase_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventCastToAzSpeechTaskBase_Parms, ReturnValue), Z_Construct_UClass_UAzSpeechTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Casting" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "CastToAzSpeechTaskBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::AzSpeechHelper_eventCastToAzSpeechTaskBase_Parms), Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics
	{
		struct AzSpeechHelper_eventCheckAndroidPermission_Parms
		{
			FString InPermission;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPermission_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPermission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_InPermission_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_InPermission = { "InPermission", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventCheckAndroidPermission_Parms, InPermission), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_InPermission_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_InPermission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechHelper_eventCheckAndroidPermission_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechHelper_eventCheckAndroidPermission_Parms), &Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_InPermission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Check if the android platform already has permission and add if not */" },
		{ "DisplayName", "Check and Add Android Permission" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Check if the android platform already has permission and add if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "CheckAndroidPermission", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::AzSpeechHelper_eventCheckAndroidPermission_Parms), Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics
	{
		struct AzSpeechHelper_eventConvertAudioDataToSoundWave_Parms
		{
			TArray<uint8> RawData;
			FString OutputModule;
			FString RelativeOutputDirectory;
			FString OutputAssetName;
			USoundWave* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputModule_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RelativeOutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputAssetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertAudioDataToSoundWave_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RawData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputModule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputModule = { "OutputModule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertAudioDataToSoundWave_Parms, OutputModule), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RelativeOutputDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RelativeOutputDirectory = { "RelativeOutputDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertAudioDataToSoundWave_Parms, RelativeOutputDirectory), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RelativeOutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RelativeOutputDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputAssetName = { "OutputAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertAudioDataToSoundWave_Parms, OutputAssetName), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputAssetName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertAudioDataToSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RawData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RawData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_RelativeOutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_OutputAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Audio" },
		{ "Comment", "/* \n\x09\x09""Convert audio data (TArray<uint8>) to USoundWave.\n\n\x09\x09[OutputModule, RelativeOutputDirectory, OutputAssetName]: Used to save the generated audio data in project's content. Set empty values to generate a transient Sound Wave\n\n\x09\x09OutputModule: Name of the module that will be used to save the generated audio data in project's content. Example: Game. \n\x09\x09RelativeOutputDirectory: Directory where the sound wave will be saved\n\x09\x09OutputAssetName: Name of the generated Sound Wave\n\n\x09\x09Use GetAvailableContentModules or look at the Audio Generator tool to check available modules\n\x09*/" },
		{ "CPP_Default_OutputAssetName", "" },
		{ "CPP_Default_OutputModule", "" },
		{ "CPP_Default_RelativeOutputDirectory", "" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Convert audio data (TArray<uint8>) to USoundWave.\n\n[OutputModule, RelativeOutputDirectory, OutputAssetName]: Used to save the generated audio data in project's content. Set empty values to generate a transient Sound Wave\n\nOutputModule: Name of the module that will be used to save the generated audio data in project's content. Example: Game.\nRelativeOutputDirectory: Directory where the sound wave will be saved\nOutputAssetName: Name of the generated Sound Wave\n\nUse GetAvailableContentModules or look at the Audio Generator tool to check available modules" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "ConvertAudioDataToSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::AzSpeechHelper_eventConvertAudioDataToSoundWave_Parms), Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics
	{
		struct AzSpeechHelper_eventConvertWavFileToSoundWave_Parms
		{
			FString FilePath;
			FString FileName;
			FString OutputModule;
			FString RelativeOutputDirectory;
			FString OutputAssetName;
			USoundWave* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputModule_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RelativeOutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputAssetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertWavFileToSoundWave_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertWavFileToSoundWave_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputModule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputModule = { "OutputModule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertWavFileToSoundWave_Parms, OutputModule), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_RelativeOutputDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_RelativeOutputDirectory = { "RelativeOutputDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertWavFileToSoundWave_Parms, RelativeOutputDirectory), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_RelativeOutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_RelativeOutputDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputAssetName = { "OutputAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertWavFileToSoundWave_Parms, OutputAssetName), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputAssetName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventConvertWavFileToSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_RelativeOutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_OutputAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Audio" },
		{ "Comment", "/* \n\x09\x09""Convert .wav file to USoundWave.\n\n\x09\x09[OutputModule, RelativeOutputDirectory, OutputAssetName]: Used to save the generated audio data in project's content. Set empty values to generate a transient Sound Wave\n\n\x09\x09OutputModule: Name of the module that will be used to save the generated audio data in project's content. Example: Game. \n\x09\x09RelativeOutputDirectory: Directory where the sound wave will be saved\n\x09\x09OutputAssetName: Name of the generated Sound Wave\n\n\x09\x09Use GetAvailableContentModules or look at the Audio Generator tool to check available modules\n\x09*/" },
		{ "CPP_Default_OutputAssetName", "" },
		{ "CPP_Default_OutputModule", "" },
		{ "CPP_Default_RelativeOutputDirectory", "" },
		{ "DisplayName", "Convert .wav file to USoundWave" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Convert .wav file to USoundWave.\n\n[OutputModule, RelativeOutputDirectory, OutputAssetName]: Used to save the generated audio data in project's content. Set empty values to generate a transient Sound Wave\n\nOutputModule: Name of the module that will be used to save the generated audio data in project's content. Example: Game.\nRelativeOutputDirectory: Directory where the sound wave will be saved\nOutputAssetName: Name of the generated Sound Wave\n\nUse GetAvailableContentModules or look at the Audio Generator tool to check available modules" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "ConvertWavFileToSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::AzSpeechHelper_eventConvertWavFileToSoundWave_Parms), Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics
	{
		struct AzSpeechHelper_eventCreateNewDirectory_Parms
		{
			FString Path;
			bool bCreateParents;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateParents_MetaData[];
#endif
		static void NewProp_bCreateParents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateParents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventCreateNewDirectory_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_bCreateParents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_bCreateParents_SetBit(void* Obj)
	{
		((AzSpeechHelper_eventCreateNewDirectory_Parms*)Obj)->bCreateParents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_bCreateParents = { "bCreateParents", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechHelper_eventCreateNewDirectory_Parms), &Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_bCreateParents_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_bCreateParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_bCreateParents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechHelper_eventCreateNewDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechHelper_eventCreateNewDirectory_Parms), &Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_bCreateParents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Create a new directory in the specified location */" },
		{ "CPP_Default_bCreateParents", "true" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Create a new directory in the specified location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "CreateNewDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::AzSpeechHelper_eventCreateNewDirectory_Parms), Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics
	{
		struct AzSpeechHelper_eventExtractAnimationDataFromVisemeData_Parms
		{
			FAzSpeechVisemeData VisemeData;
			FAzSpeechAnimationData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisemeData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisemeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_VisemeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_VisemeData = { "VisemeData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventExtractAnimationDataFromVisemeData_Parms, VisemeData), Z_Construct_UScriptStruct_FAzSpeechVisemeData, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_VisemeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_VisemeData_MetaData)) }; // 3839445482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventExtractAnimationDataFromVisemeData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzSpeechAnimationData, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_ReturnValue_MetaData)) }; // 911539369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_VisemeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Data" },
		{ "Comment", "/* \n\x09\x09""Extract the Animation JSON property from Viseme Data.\n\n\x09\x09JSON Body Format:\n\x09\x09[\n\x09\x09\x09""FrameIndex: Integer,\n\x09\x09\x09""BlendShapes: [ \n\x09\x09\x09\x09[ \n\x09\x09\x09\x09\x09Number, \n\x09\x09\x09\x09\x09... \n\x09\x09\x09\x09], \n\x09\x09\x09\x09[ \n\x09\x09\x09\x09\x09Number, \n\x09\x09\x09\x09\x09... \n\x09\x09\x09\x09], \n\x09\x09\x09\x09... \n\x09\x09\x09]\n\x09\x09]\n\x09*/" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Extract the Animation JSON property from Viseme Data.\n\nJSON Body Format:\n[\n        FrameIndex: Integer,\n        BlendShapes: [\n                [\n                        Number,\n                        ...\n                ],\n                [\n                        Number,\n                        ...\n                ],\n                ...\n        ]\n]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "ExtractAnimationDataFromVisemeData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::AzSpeechHelper_eventExtractAnimationDataFromVisemeData_Parms), Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics
	{
		struct AzSpeechHelper_eventExtractAnimationDataFromVisemeDataArray_Parms
		{
			TArray<FAzSpeechVisemeData> VisemeData;
			TArray<FAzSpeechAnimationData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisemeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisemeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisemeData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_VisemeData_Inner = { "VisemeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechVisemeData, METADATA_PARAMS(nullptr, 0) }; // 3839445482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_VisemeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_VisemeData = { "VisemeData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventExtractAnimationDataFromVisemeDataArray_Parms, VisemeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_VisemeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_VisemeData_MetaData)) }; // 3839445482
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechAnimationData, METADATA_PARAMS(nullptr, 0) }; // 911539369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventExtractAnimationDataFromVisemeDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_ReturnValue_MetaData)) }; // 911539369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_VisemeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_VisemeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Data" },
		{ "Comment", "/*\n\x09\x09""Extract the Animation JSON property from Viseme Data Array.\n\n\x09\x09JSON Body Format:\n\x09\x09[\n\x09\x09\x09""FrameIndex: Integer,\n\x09\x09\x09""BlendShapes: [\n\x09\x09\x09\x09[\n\x09\x09\x09\x09\x09Number,\n\x09\x09\x09\x09\x09...\n\x09\x09\x09\x09],\n\x09\x09\x09\x09[\n\x09\x09\x09\x09\x09Number,\n\x09\x09\x09\x09\x09...\n\x09\x09\x09\x09],\n\x09\x09\x09\x09...\n\x09\x09\x09]\n\x09\x09]\n\x09*/" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Extract the Animation JSON property from Viseme Data Array.\n\nJSON Body Format:\n[\n        FrameIndex: Integer,\n        BlendShapes: [\n                [\n                        Number,\n                        ...\n                ],\n                [\n                        Number,\n                        ...\n                ],\n                ...\n        ]\n]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "ExtractAnimationDataFromVisemeDataArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::AzSpeechHelper_eventExtractAnimationDataFromVisemeDataArray_Parms), Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics
	{
		struct AzSpeechHelper_eventGetAudioInputDeviceInfoFromID_Parms
		{
			FString DeviceID;
			FAzSpeechAudioInputDeviceInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventGetAudioInputDeviceInfoFromID_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventGetAudioInputDeviceInfoFromID_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_ReturnValue_MetaData)) }; // 651049656
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Audio" },
		{ "Comment", "/* Get the audio input devices info by it's ID */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Get the audio input devices info by it's ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "GetAudioInputDeviceInfoFromID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::AzSpeechHelper_eventGetAudioInputDeviceInfoFromID_Parms), Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics
	{
		struct AzSpeechHelper_eventGetAvailableAudioInputDevices_Parms
		{
			TArray<FAzSpeechAudioInputDeviceInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAzSpeechAudioInputDeviceInfo, METADATA_PARAMS(nullptr, 0) }; // 651049656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventGetAvailableAudioInputDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::NewProp_ReturnValue_MetaData)) }; // 651049656
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Audio" },
		{ "Comment", "/* Get the available audio input devices in the current platform */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Get the available audio input devices in the current platform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "GetAvailableAudioInputDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::AzSpeechHelper_eventGetAvailableAudioInputDevices_Parms), Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics
	{
		struct AzSpeechHelper_eventGetAvailableContentModules_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventGetAvailableContentModules_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Get available modules with content enabled */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Get available modules with content enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "GetAvailableContentModules", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::AzSpeechHelper_eventGetAvailableContentModules_Parms), Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics
	{
		struct AzSpeechHelper_eventGetPluginFriendlyName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventGetPluginFriendlyName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Get AzSpeech Friendly Name */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Get AzSpeech Friendly Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "GetPluginFriendlyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::AzSpeechHelper_eventGetPluginFriendlyName_Parms), Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics
	{
		struct AzSpeechHelper_eventGetPluginVersion_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventGetPluginVersion_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Get AzSpeech Version */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Get AzSpeech Version" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "GetPluginVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::AzSpeechHelper_eventGetPluginVersion_Parms), Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics
	{
		struct AzSpeechHelper_eventIsAudioDataValid_Parms
		{
			TArray<uint8> RawData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventIsAudioDataValid_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_RawData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechHelper_eventIsAudioDataValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechHelper_eventIsAudioDataValid_Parms), &Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_RawData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_RawData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Audio" },
		{ "Comment", "/* Check if the audio data is valid or not */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Check if the audio data is valid or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "IsAudioDataValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::AzSpeechHelper_eventIsAudioDataValid_Parms), Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics
	{
		struct AzSpeechHelper_eventIsAudioInputDeviceAvailable_Parms
		{
			FString DeviceID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventIsAudioInputDeviceAvailable_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechHelper_eventIsAudioInputDeviceAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechHelper_eventIsAudioInputDeviceAvailable_Parms), &Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Audio" },
		{ "Comment", "/* Check if the audio input device is currently available */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Check if the audio input device is currently available" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "IsAudioInputDeviceAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::AzSpeechHelper_eventIsAudioInputDeviceAvailable_Parms), Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics
	{
		struct AzSpeechHelper_eventIsAudioInputDeviceIDValid_Parms
		{
			FString DeviceID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventIsAudioInputDeviceIDValid_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechHelper_eventIsAudioInputDeviceIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechHelper_eventIsAudioInputDeviceIDValid_Parms), &Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Audio" },
		{ "Comment", "/* Check if the device ID is valid */" },
		{ "DisplayName", "Is Audio Input Device ID Valid" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Check if the device ID is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "IsAudioInputDeviceIDValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::AzSpeechHelper_eventIsAudioInputDeviceIDValid_Parms), Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics
	{
		struct AzSpeechHelper_eventIsContentModuleAvailable_Parms
		{
			FString ModuleName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModuleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventIsContentModuleAvailable_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ModuleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechHelper_eventIsContentModuleAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechHelper_eventIsContentModuleAvailable_Parms), &Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Check if the content module is available */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Check if the content module is available" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "IsContentModuleAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::AzSpeechHelper_eventIsContentModuleAvailable_Parms), Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics
	{
		struct AzSpeechHelper_eventLoadXMLToString_Parms
		{
			FString FilePath;
			FString FileName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventLoadXMLToString_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventLoadXMLToString_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventLoadXMLToString_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Load a given .xml file and return the content as string */" },
		{ "DisplayName", "Load XML to String" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Load a given .xml file and return the content as string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "LoadXMLToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::AzSpeechHelper_eventLoadXMLToString_Parms), Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics
	{
		struct AzSpeechHelper_eventOpenDesktopFolderPicker_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventOpenDesktopFolderPicker_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Opens the desktop folder picker and return the selected folder path as string */" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Opens the desktop folder picker and return the selected folder path as string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "OpenDesktopFolderPicker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::AzSpeechHelper_eventOpenDesktopFolderPicker_Parms), Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics
	{
		struct AzSpeechHelper_eventQualifyFileExtension_Parms
		{
			FString Path;
			FString Name;
			FString Extension;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyFileExtension_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyFileExtension_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Extension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyFileExtension_Parms, Extension), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyFileExtension_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Helper function to qualify the extension of a given file */" },
		{ "DisplayName", "Qualify File Extension" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Helper function to qualify the extension of a given file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "QualifyFileExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::AzSpeechHelper_eventQualifyFileExtension_Parms), Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics
	{
		struct AzSpeechHelper_eventQualifyModulePath_Parms
		{
			FString ModuleName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModuleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyModulePath_Parms, ModuleName), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ModuleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyModulePath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Helper function to qualify a Module Name string to a single string like /ModulePath/ */" },
		{ "DisplayName", "Qualify Module Path" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Helper function to qualify a Module Name string to a single string like /ModulePath/" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "QualifyModulePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::AzSpeechHelper_eventQualifyModulePath_Parms), Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics
	{
		struct AzSpeechHelper_eventQualifyPath_Parms
		{
			FString Path;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyPath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Helper function to qualify a path string to a single string like Full/File/Path/ */" },
		{ "DisplayName", "Qualify Path" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Helper function to qualify a path string to a single string like Full/File/Path/" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "QualifyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::AzSpeechHelper_eventQualifyPath_Parms), Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_QualifyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_QualifyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics
	{
		struct AzSpeechHelper_eventQualifyWAVFileName_Parms
		{
			FString Path;
			FString Name;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyWAVFileName_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyWAVFileName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyWAVFileName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Helper function to qualify a WAV file path + name to a single string like Full/File/Path/Filename.wav */" },
		{ "DisplayName", "Qualify WAV File Path" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Helper function to qualify a WAV file path + name to a single string like Full/File/Path/Filename.wav" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "QualifyWAVFileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::AzSpeechHelper_eventQualifyWAVFileName_Parms), Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics
	{
		struct AzSpeechHelper_eventQualifyXMLFileName_Parms
		{
			FString Path;
			FString Name;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyXMLFileName_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyXMLFileName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechHelper_eventQualifyXMLFileName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech | Utils" },
		{ "Comment", "/* Helper function to qualify a XML file path + name to a single string like Full/File/Path/Filename.xml */" },
		{ "DisplayName", "Qualify XML File Path" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
		{ "ToolTip", "Helper function to qualify a XML file path + name to a single string like Full/File/Path/Filename.xml" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechHelper, nullptr, "QualifyXMLFileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::AzSpeechHelper_eventQualifyXMLFileName_Parms), Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechHelper);
	UClass* Z_Construct_UClass_UAzSpeechHelper_NoRegister()
	{
		return UAzSpeechHelper::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzSpeechHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechRecognizerTaskBase, "CastToAzSpeechRecognizerTaskBase" }, // 895941441
		{ &Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechSynthesizerTaskBase, "CastToAzSpeechSynthesizerTaskBase" }, // 989996219
		{ &Z_Construct_UFunction_UAzSpeechHelper_CastToAzSpeechTaskBase, "CastToAzSpeechTaskBase" }, // 960559231
		{ &Z_Construct_UFunction_UAzSpeechHelper_CheckAndroidPermission, "CheckAndroidPermission" }, // 1329731808
		{ &Z_Construct_UFunction_UAzSpeechHelper_ConvertAudioDataToSoundWave, "ConvertAudioDataToSoundWave" }, // 1040297867
		{ &Z_Construct_UFunction_UAzSpeechHelper_ConvertWavFileToSoundWave, "ConvertWavFileToSoundWave" }, // 2703041366
		{ &Z_Construct_UFunction_UAzSpeechHelper_CreateNewDirectory, "CreateNewDirectory" }, // 3569462410
		{ &Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeData, "ExtractAnimationDataFromVisemeData" }, // 2821945697
		{ &Z_Construct_UFunction_UAzSpeechHelper_ExtractAnimationDataFromVisemeDataArray, "ExtractAnimationDataFromVisemeDataArray" }, // 7546523
		{ &Z_Construct_UFunction_UAzSpeechHelper_GetAudioInputDeviceInfoFromID, "GetAudioInputDeviceInfoFromID" }, // 4069207172
		{ &Z_Construct_UFunction_UAzSpeechHelper_GetAvailableAudioInputDevices, "GetAvailableAudioInputDevices" }, // 963555103
		{ &Z_Construct_UFunction_UAzSpeechHelper_GetAvailableContentModules, "GetAvailableContentModules" }, // 1100542085
		{ &Z_Construct_UFunction_UAzSpeechHelper_GetPluginFriendlyName, "GetPluginFriendlyName" }, // 3237125935
		{ &Z_Construct_UFunction_UAzSpeechHelper_GetPluginVersion, "GetPluginVersion" }, // 2276411841
		{ &Z_Construct_UFunction_UAzSpeechHelper_IsAudioDataValid, "IsAudioDataValid" }, // 3607409557
		{ &Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceAvailable, "IsAudioInputDeviceAvailable" }, // 2577086632
		{ &Z_Construct_UFunction_UAzSpeechHelper_IsAudioInputDeviceIDValid, "IsAudioInputDeviceIDValid" }, // 1982722533
		{ &Z_Construct_UFunction_UAzSpeechHelper_IsContentModuleAvailable, "IsContentModuleAvailable" }, // 3080009422
		{ &Z_Construct_UFunction_UAzSpeechHelper_LoadXMLToString, "LoadXMLToString" }, // 1738329921
		{ &Z_Construct_UFunction_UAzSpeechHelper_OpenDesktopFolderPicker, "OpenDesktopFolderPicker" }, // 299389807
		{ &Z_Construct_UFunction_UAzSpeechHelper_QualifyFileExtension, "QualifyFileExtension" }, // 2515406854
		{ &Z_Construct_UFunction_UAzSpeechHelper_QualifyModulePath, "QualifyModulePath" }, // 2136689502
		{ &Z_Construct_UFunction_UAzSpeechHelper_QualifyPath, "QualifyPath" }, // 3786933622
		{ &Z_Construct_UFunction_UAzSpeechHelper_QualifyWAVFileName, "QualifyWAVFileName" }, // 3512592754
		{ &Z_Construct_UFunction_UAzSpeechHelper_QualifyXMLFileName, "QualifyXMLFileName" }, // 1497732300
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechHelper_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/AzSpeechHelper.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/AzSpeechHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechHelper_Statics::ClassParams = {
		&UAzSpeechHelper::StaticClass,
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
		0x001002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechHelper()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechHelper.OuterSingleton, Z_Construct_UClass_UAzSpeechHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechHelper.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechHelper>()
	{
		return UAzSpeechHelper::StaticClass();
	}
	UAzSpeechHelper::UAzSpeechHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechHelper);
	UAzSpeechHelper::~UAzSpeechHelper() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechHelper, UAzSpeechHelper::StaticClass, TEXT("UAzSpeechHelper"), &Z_Registration_Info_UClass_UAzSpeechHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechHelper), 3261333837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_2356513205(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_AzSpeechHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
