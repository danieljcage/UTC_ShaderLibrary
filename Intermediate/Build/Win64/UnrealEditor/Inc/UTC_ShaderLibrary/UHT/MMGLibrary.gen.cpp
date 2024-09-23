// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_ShaderLibrary/Public/MMGLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGLibrary() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_UTC_ShaderLibrary();
UTC_SHADERLIBRARY_API UEnum* Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType();
// End Cross Module References

// Begin Enum EExpressionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExpressionType;
static UEnum* EExpressionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EExpressionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EExpressionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("EExpressionType"));
	}
	return Z_Registration_Info_UEnum_EExpressionType.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UEnum* StaticEnum<EExpressionType>()
{
	return EExpressionType_StaticEnum();
}
struct Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EComment.DisplayName", "Comment" },
		{ "EComment.Name", "EComment" },
		{ "EMainComment.DisplayName", "Main Comment" },
		{ "EMainComment.Name", "EMainComment" },
		{ "EMaterialAttribute.DisplayName", "Material Attribute" },
		{ "EMaterialAttribute.Name", "EMaterialAttribute" },
		{ "EMaterialFunction.DisplayName", "Material Function" },
		{ "EMaterialFunction.Name", "EMaterialFunction" },
		{ "EPackedCompMask.DisplayName", "PackedCompMask" },
		{ "EPackedCompMask.Name", "EPackedCompMask" },
		{ "EPackedRerouteDeclaration.DisplayName", "PackedTexture" },
		{ "EPackedRerouteDeclaration.Name", "EPackedRerouteDeclaration" },
		{ "EPackedTexture.DisplayName", "PackedTexture" },
		{ "EPackedTexture.Name", "EPackedTexture" },
		{ "EParameter.DisplayName", "Parameter" },
		{ "EParameter.Name", "EParameter" },
		{ "ERerouteDeclarationFunction.DisplayName", "Reroute Declaration Function" },
		{ "ERerouteDeclarationFunction.Name", "ERerouteDeclarationFunction" },
		{ "ERerouteDeclarationMA.DisplayName", "Reroute Declaration Material Attribute" },
		{ "ERerouteDeclarationMA.Name", "ERerouteDeclarationMA" },
		{ "ERerouteUsageBlendA.DisplayName", "Reroute Usage Blend A" },
		{ "ERerouteUsageBlendA.Name", "ERerouteUsageBlendA" },
		{ "ERerouteUsageBlendB.DisplayName", "Reroute Usage Blend B" },
		{ "ERerouteUsageBlendB.Name", "ERerouteUsageBlendB" },
		{ "ERerouteUsageFunction.DisplayName", "Reroute Usage Function" },
		{ "ERerouteUsageFunction.Name", "ERerouteUsageFunction" },
		{ "EUVsFunction.DisplayName", "UVs Function" },
		{ "EUVsFunction.Name", "EUVsFunction" },
		{ "EUVsParameter.DisplayName", "UVsParameter" },
		{ "EUVsParameter.Name", "EUVsParameter" },
		{ "ModuleRelativePath", "Public/MMGLibrary.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaterialAttribute", (int64)EMaterialAttribute },
		{ "EMaterialFunction", (int64)EMaterialFunction },
		{ "EUVsFunction", (int64)EUVsFunction },
		{ "EParameter", (int64)EParameter },
		{ "EUVsParameter", (int64)EUVsParameter },
		{ "EPackedTexture", (int64)EPackedTexture },
		{ "EPackedRerouteDeclaration", (int64)EPackedRerouteDeclaration },
		{ "EPackedCompMask", (int64)EPackedCompMask },
		{ "ERerouteDeclarationFunction", (int64)ERerouteDeclarationFunction },
		{ "ERerouteUsageFunction", (int64)ERerouteUsageFunction },
		{ "ERerouteDeclarationMA", (int64)ERerouteDeclarationMA },
		{ "ERerouteUsageBlendA", (int64)ERerouteUsageBlendA },
		{ "ERerouteUsageBlendB", (int64)ERerouteUsageBlendB },
		{ "EComment", (int64)EComment },
		{ "EMainComment", (int64)EMainComment },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	"EExpressionType",
	"EExpressionType",
	Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType()
{
	if (!Z_Registration_Info_UEnum_EExpressionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExpressionType.InnerSingleton, Z_Construct_UEnum_UTC_ShaderLibrary_EExpressionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EExpressionType.InnerSingleton;
}
// End Enum EExpressionType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_MMGLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EExpressionType_StaticEnum, TEXT("EExpressionType"), &Z_Registration_Info_UEnum_EExpressionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2087791861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_MMGLibrary_h_3661062898(TEXT("/Script/UTC_ShaderLibrary"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_MMGLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_MMGLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
