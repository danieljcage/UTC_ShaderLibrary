// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_ShaderLibrary/Public/UI/GraphEditor/MMGGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGGraphSchema() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
UPackage* Z_Construct_UPackage__Script_UTC_ShaderLibrary();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGGraphSchema();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGGraphSchema_NoRegister();
// End Cross Module References

// Begin Class UMMGGraphSchema
void UMMGGraphSchema::StaticRegisterNativesUMMGGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGGraphSchema);
UClass* Z_Construct_UClass_UMMGGraphSchema_NoRegister()
{
	return UMMGGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UMMGGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GraphEditor/MMGGraphSchema.h" },
		{ "ModuleRelativePath", "Public/UI/GraphEditor/MMGGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMGGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGGraphSchema_Statics::ClassParams = {
	&UMMGGraphSchema::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGGraphSchema()
{
	if (!Z_Registration_Info_UClass_UMMGGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGGraphSchema.OuterSingleton, Z_Construct_UClass_UMMGGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGGraphSchema.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGGraphSchema>()
{
	return UMMGGraphSchema::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGGraphSchema);
UMMGGraphSchema::~UMMGGraphSchema() {}
// End Class UMMGGraphSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGGraphSchema_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMGGraphSchema, UMMGGraphSchema::StaticClass, TEXT("UMMGGraphSchema"), &Z_Registration_Info_UClass_UMMGGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGGraphSchema), 1709620246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGGraphSchema_h_863821476(TEXT("/Script/UTC_ShaderLibrary"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGGraphSchema_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
