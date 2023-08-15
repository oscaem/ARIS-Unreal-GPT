// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Utils/HttpGPTHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTHelper() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTHelper();
	HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTHelper_NoRegister();
	HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel();
	HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole();
	HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize();
	HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat();
	UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References
	DEFINE_FUNCTION(UHttpGPTHelper::execNameToFormat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Format);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHttpGPTResponseFormat*)Z_Param__Result=UHttpGPTHelper::NameToFormat(Z_Param_Format);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execFormatToName)
	{
		P_GET_ENUM_REF(EHttpGPTResponseFormat,Z_Param_Out_Format);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UHttpGPTHelper::FormatToName((EHttpGPTResponseFormat&)(Z_Param_Out_Format));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execNameToSize)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHttpGPTImageSize*)Z_Param__Result=UHttpGPTHelper::NameToSize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execSizeToName)
	{
		P_GET_ENUM_REF(EHttpGPTImageSize,Z_Param_Out_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UHttpGPTHelper::SizeToName((EHttpGPTImageSize&)(Z_Param_Out_Size));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execModelSupportsChat)
	{
		P_GET_ENUM_REF(EHttpGPTChatModel,Z_Param_Out_Model);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHttpGPTHelper::ModelSupportsChat((EHttpGPTChatModel&)(Z_Param_Out_Model));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execGetEndpointForModel)
	{
		P_GET_ENUM_REF(EHttpGPTChatModel,Z_Param_Out_Model);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UHttpGPTHelper::GetEndpointForModel((EHttpGPTChatModel&)(Z_Param_Out_Model));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execGetAvailableGPTModels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UHttpGPTHelper::GetAvailableGPTModels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execNameToRole)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHttpGPTChatRole*)Z_Param__Result=UHttpGPTHelper::NameToRole(Z_Param_Role);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execRoleToName)
	{
		P_GET_ENUM_REF(EHttpGPTChatRole,Z_Param_Out_Role);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UHttpGPTHelper::RoleToName((EHttpGPTChatRole&)(Z_Param_Out_Role));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execNameToModel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Model);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHttpGPTChatModel*)Z_Param__Result=UHttpGPTHelper::NameToModel(Z_Param_Model);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTHelper::execModelToName)
	{
		P_GET_ENUM_REF(EHttpGPTChatModel,Z_Param_Out_Model);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UHttpGPTHelper::ModelToName((EHttpGPTChatModel&)(Z_Param_Out_Model));
		P_NATIVE_END;
	}
	void UHttpGPTHelper::StaticRegisterNativesUHttpGPTHelper()
	{
		UClass* Class = UHttpGPTHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FormatToName", &UHttpGPTHelper::execFormatToName },
			{ "GetAvailableGPTModels", &UHttpGPTHelper::execGetAvailableGPTModels },
			{ "GetEndpointForModel", &UHttpGPTHelper::execGetEndpointForModel },
			{ "ModelSupportsChat", &UHttpGPTHelper::execModelSupportsChat },
			{ "ModelToName", &UHttpGPTHelper::execModelToName },
			{ "NameToFormat", &UHttpGPTHelper::execNameToFormat },
			{ "NameToModel", &UHttpGPTHelper::execNameToModel },
			{ "NameToRole", &UHttpGPTHelper::execNameToRole },
			{ "NameToSize", &UHttpGPTHelper::execNameToSize },
			{ "RoleToName", &UHttpGPTHelper::execRoleToName },
			{ "SizeToName", &UHttpGPTHelper::execSizeToName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics
	{
		struct HttpGPTHelper_eventFormatToName_Parms
		{
			EHttpGPTResponseFormat Format;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventFormatToName_Parms, Format), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format_MetaData)) }; // 3575472561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventFormatToName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Convert HttpGPT Format to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "FormatToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::HttpGPTHelper_eventFormatToName_Parms), Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_FormatToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_FormatToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics
	{
		struct HttpGPTHelper_eventGetAvailableGPTModels_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventGetAvailableGPTModels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Get Available GPT Models" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "GetAvailableGPTModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::HttpGPTHelper_eventGetAvailableGPTModels_Parms), Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics
	{
		struct HttpGPTHelper_eventGetEndpointForModel_Parms
		{
			EHttpGPTChatModel Model;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventGetEndpointForModel_Parms, Model), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model_MetaData)) }; // 1781358363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventGetEndpointForModel_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Get Endpoint for Model" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "GetEndpointForModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::HttpGPTHelper_eventGetEndpointForModel_Parms), Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics
	{
		struct HttpGPTHelper_eventModelSupportsChat_Parms
		{
			EHttpGPTChatModel Model;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventModelSupportsChat_Parms, Model), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model_MetaData)) }; // 1781358363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpGPTHelper_eventModelSupportsChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpGPTHelper_eventModelSupportsChat_Parms), &Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Model Supports Chat" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "ModelSupportsChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::HttpGPTHelper_eventModelSupportsChat_Parms), Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics
	{
		struct HttpGPTHelper_eventModelToName_Parms
		{
			EHttpGPTChatModel Model;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventModelToName_Parms, Model), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model_MetaData)) }; // 1781358363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventModelToName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert HttpGPT Model to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "ModelToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::HttpGPTHelper_eventModelToName_Parms), Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_ModelToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_ModelToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics
	{
		struct HttpGPTHelper_eventNameToFormat_Parms
		{
			FName Format;
			EHttpGPTResponseFormat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Format;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_Format_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventNameToFormat_Parms, Format), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_Format_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventNameToFormat_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue_MetaData)) }; // 3575472561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Convert Name to HttpGPT Format" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::HttpGPTHelper_eventNameToFormat_Parms), Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics
	{
		struct HttpGPTHelper_eventNameToModel_Parms
		{
			FName Model;
			EHttpGPTChatModel ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Model;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventNameToModel_Parms, Model), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventNameToModel_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatModel, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue_MetaData)) }; // 1781358363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert Name to HttpGPT Model" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::HttpGPTHelper_eventNameToModel_Parms), Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics
	{
		struct HttpGPTHelper_eventNameToRole_Parms
		{
			FName Role;
			EHttpGPTChatRole ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_Role_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventNameToRole_Parms, Role), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_Role_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventNameToRole_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue_MetaData)) }; // 2974137301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert Name to HttpGPT Role" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::HttpGPTHelper_eventNameToRole_Parms), Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics
	{
		struct HttpGPTHelper_eventNameToSize_Parms
		{
			FName Size;
			EHttpGPTImageSize ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventNameToSize_Parms, Size), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventNameToSize_Parms, ReturnValue), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue_MetaData)) }; // 237524650
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Convert Name to HttpGPT Size" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "NameToSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::HttpGPTHelper_eventNameToSize_Parms), Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_NameToSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_NameToSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics
	{
		struct HttpGPTHelper_eventRoleToName_Parms
		{
			EHttpGPTChatRole Role;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventRoleToName_Parms, Role), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTChatRole, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role_MetaData)) }; // 2974137301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventRoleToName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Chat" },
		{ "DisplayName", "Convert HttpGPT Role to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "RoleToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::HttpGPTHelper_eventRoleToName_Parms), Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_RoleToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_RoleToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics
	{
		struct HttpGPTHelper_eventSizeToName_Parms
		{
			EHttpGPTImageSize Size;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventSizeToName_Parms, Size), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size_MetaData)) }; // 237524650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTHelper_eventSizeToName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Convert HttpGPT Size to Name" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTHelper, nullptr, "SizeToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::HttpGPTHelper_eventSizeToName_Parms), Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTHelper_SizeToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTHelper_SizeToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTHelper);
	UClass* Z_Construct_UClass_UHttpGPTHelper_NoRegister()
	{
		return UHttpGPTHelper::StaticClass();
	}
	struct Z_Construct_UClass_UHttpGPTHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpGPTHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpGPTHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTHelper_FormatToName, "FormatToName" }, // 694047034
		{ &Z_Construct_UFunction_UHttpGPTHelper_GetAvailableGPTModels, "GetAvailableGPTModels" }, // 2496246469
		{ &Z_Construct_UFunction_UHttpGPTHelper_GetEndpointForModel, "GetEndpointForModel" }, // 1751091760
		{ &Z_Construct_UFunction_UHttpGPTHelper_ModelSupportsChat, "ModelSupportsChat" }, // 244568407
		{ &Z_Construct_UFunction_UHttpGPTHelper_ModelToName, "ModelToName" }, // 827880086
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToFormat, "NameToFormat" }, // 1052420112
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToModel, "NameToModel" }, // 2623998805
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToRole, "NameToRole" }, // 2859483350
		{ &Z_Construct_UFunction_UHttpGPTHelper_NameToSize, "NameToSize" }, // 3918983065
		{ &Z_Construct_UFunction_UHttpGPTHelper_RoleToName, "RoleToName" }, // 3788343576
		{ &Z_Construct_UFunction_UHttpGPTHelper_SizeToName, "SizeToName" }, // 2206407368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTHelper_Statics::Class_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utils/HttpGPTHelper.h" },
		{ "ModuleRelativePath", "Public/Utils/HttpGPTHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpGPTHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTHelper_Statics::ClassParams = {
		&UHttpGPTHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHttpGPTHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpGPTHelper()
	{
		if (!Z_Registration_Info_UClass_UHttpGPTHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTHelper.OuterSingleton, Z_Construct_UClass_UHttpGPTHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpGPTHelper.OuterSingleton;
	}
	template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<UHttpGPTHelper>()
	{
		return UHttpGPTHelper::StaticClass();
	}
	UHttpGPTHelper::UHttpGPTHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTHelper);
	UHttpGPTHelper::~UHttpGPTHelper() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTHelper, UHttpGPTHelper::StaticClass, TEXT("UHttpGPTHelper"), &Z_Registration_Info_UClass_UHttpGPTHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTHelper), 1525228247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_3739385987(TEXT("/Script/HttpGPTCommonModule"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Utils_HttpGPTHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
