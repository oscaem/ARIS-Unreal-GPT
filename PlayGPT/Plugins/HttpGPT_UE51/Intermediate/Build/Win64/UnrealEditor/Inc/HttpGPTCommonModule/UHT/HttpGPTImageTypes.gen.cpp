// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTImageTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTImageTypes() {}
// Cross Module References
	HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize();
	HTTPGPTCOMMONMODULE_API UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonError();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageData();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageOptions();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageResponse();
	UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTImageSize;
	static UEnum* EHttpGPTImageSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHttpGPTImageSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHttpGPTImageSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTImageSize"));
		}
		return Z_Registration_Info_UEnum_EHttpGPTImageSize.OuterSingleton;
	}
	template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTImageSize>()
	{
		return EHttpGPTImageSize_StaticEnum();
	}
	struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enumerators[] = {
		{ "EHttpGPTImageSize::x256", (int64)EHttpGPTImageSize::x256 },
		{ "EHttpGPTImageSize::x512", (int64)EHttpGPTImageSize::x512 },
		{ "EHttpGPTImageSize::x1024", (int64)EHttpGPTImageSize::x1024 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Size" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
		{ "x1024.DisplayName", "1024x1024" },
		{ "x1024.Name", "EHttpGPTImageSize::x1024" },
		{ "x256.DisplayName", "256x256" },
		{ "x256.Name", "EHttpGPTImageSize::x256" },
		{ "x512.DisplayName", "512x512" },
		{ "x512.Name", "EHttpGPTImageSize::x512" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		"EHttpGPTImageSize",
		"EHttpGPTImageSize",
		Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize()
	{
		if (!Z_Registration_Info_UEnum_EHttpGPTImageSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTImageSize.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHttpGPTImageSize.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpGPTResponseFormat;
	static UEnum* EHttpGPTResponseFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHttpGPTResponseFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHttpGPTResponseFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("EHttpGPTResponseFormat"));
		}
		return Z_Registration_Info_UEnum_EHttpGPTResponseFormat.OuterSingleton;
	}
	template<> HTTPGPTCOMMONMODULE_API UEnum* StaticEnum<EHttpGPTResponseFormat>()
	{
		return EHttpGPTResponseFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enumerators[] = {
		{ "EHttpGPTResponseFormat::url", (int64)EHttpGPTResponseFormat::url },
		{ "EHttpGPTResponseFormat::b64_json", (int64)EHttpGPTResponseFormat::b64_json },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enum_MetaDataParams[] = {
		{ "b64_json.DisplayName", "B64" },
		{ "b64_json.Name", "EHttpGPTResponseFormat::b64_json" },
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Response Format" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
		{ "url.DisplayName", "URL" },
		{ "url.Name", "EHttpGPTResponseFormat::url" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		"EHttpGPTResponseFormat",
		"EHttpGPTResponseFormat",
		Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat()
	{
		if (!Z_Registration_Info_UEnum_EHttpGPTResponseFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpGPTResponseFormat.InnerSingleton, Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHttpGPTResponseFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTImageData;
class UScriptStruct* FHttpGPTImageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTImageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTImageData, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTImageData"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageData.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTImageData>()
{
	return FHttpGPTImageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTImageData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Data" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTImageData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTImageData, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTImageData, Format), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format_MetaData)) }; // 3575472561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewProp_Format,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTImageData",
		sizeof(FHttpGPTImageData),
		alignof(FHttpGPTImageData),
		Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageData()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTImageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTImageData.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTImageData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTImageResponse;
class UScriptStruct* FHttpGPTImageResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTImageResponse, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTImageResponse"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTImageResponse>()
{
	return FHttpGPTImageResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Created;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Response" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTImageResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Created_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTImageResponse, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Created_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHttpGPTImageData, METADATA_PARAMS(nullptr, 0) }; // 319914800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTImageResponse, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data_MetaData)) }; // 319914800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FHttpGPTImageResponse*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHttpGPTImageResponse), &Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTImageResponse, Error), Z_Construct_UScriptStruct_FHttpGPTCommonError, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Error_MetaData)) }; // 1688627949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Created,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewProp_Error,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTImageResponse",
		sizeof(FHttpGPTImageResponse),
		alignof(FHttpGPTImageResponse),
		Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTImageResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HttpGPTImageOptions;
class UScriptStruct* FHttpGPTImageOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHttpGPTImageOptions, (UObject*)Z_Construct_UPackage__Script_HttpGPTCommonModule(), TEXT("HttpGPTImageOptions"));
	}
	return Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.OuterSingleton;
}
template<> HTTPGPTCOMMONMODULE_API UScriptStruct* StaticStruct<FHttpGPTImageOptions>()
{
	return FHttpGPTImageOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagesNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImagesNum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Options" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHttpGPTImageOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_ImagesNum_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Number of Images" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_ImagesNum = { "ImagesNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTImageOptions, ImagesNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_ImagesNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_ImagesNum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Image Size" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTImageOptions, Size), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTImageSize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size_MetaData)) }; // 237524650
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Response Format" },
		{ "ModuleRelativePath", "Public/Structures/HttpGPTImageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHttpGPTImageOptions, Format), Z_Construct_UEnum_HttpGPTCommonModule_EHttpGPTResponseFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format_MetaData)) }; // 3575472561
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_ImagesNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewProp_Format,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
		nullptr,
		&NewStructOps,
		"HttpGPTImageOptions",
		sizeof(FHttpGPTImageOptions),
		alignof(FHttpGPTImageOptions),
		Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.InnerSingleton, Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HttpGPTImageOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::EnumInfo[] = {
		{ EHttpGPTImageSize_StaticEnum, TEXT("EHttpGPTImageSize"), &Z_Registration_Info_UEnum_EHttpGPTImageSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 237524650U) },
		{ EHttpGPTResponseFormat_StaticEnum, TEXT("EHttpGPTResponseFormat"), &Z_Registration_Info_UEnum_EHttpGPTResponseFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3575472561U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::ScriptStructInfo[] = {
		{ FHttpGPTImageData::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTImageData_Statics::NewStructOps, TEXT("HttpGPTImageData"), &Z_Registration_Info_UScriptStruct_HttpGPTImageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTImageData), 319914800U) },
		{ FHttpGPTImageResponse::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTImageResponse_Statics::NewStructOps, TEXT("HttpGPTImageResponse"), &Z_Registration_Info_UScriptStruct_HttpGPTImageResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTImageResponse), 1292637480U) },
		{ FHttpGPTImageOptions::StaticStruct, Z_Construct_UScriptStruct_FHttpGPTImageOptions_Statics::NewStructOps, TEXT("HttpGPTImageOptions"), &Z_Registration_Info_UScriptStruct_HttpGPTImageOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHttpGPTImageOptions), 1009240069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_4147613423(TEXT("/Script/HttpGPTCommonModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Structures_HttpGPTImageTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
