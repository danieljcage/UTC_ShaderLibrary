// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_ShaderLibrary/Public/UI/Presets/MMGPresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGPresetFactory() {}

// Begin Cross Module References
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_UTC_ShaderLibrary();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGPresetFactory();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGPresetFactory_NoRegister();
// End Cross Module References

// Begin Class UMMGPresetFactory
void UMMGPresetFactory::StaticRegisterNativesUMMGPresetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGPresetFactory);
UClass* Z_Construct_UClass_UMMGPresetFactory_NoRegister()
{
	return UMMGPresetFactory::StaticClass();
}
struct Z_Construct_UClass_UMMGPresetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Presets/MMGPresetFactory.h" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGPresetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMGPresetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGPresetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGPresetFactory_Statics::ClassParams = {
	&UMMGPresetFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGPresetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGPresetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGPresetFactory()
{
	if (!Z_Registration_Info_UClass_UMMGPresetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGPresetFactory.OuterSingleton, Z_Construct_UClass_UMMGPresetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGPresetFactory.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGPresetFactory>()
{
	return UMMGPresetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGPresetFactory);
UMMGPresetFactory::~UMMGPresetFactory() {}
// End Class UMMGPresetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMGPresetFactory, UMMGPresetFactory::StaticClass, TEXT("UMMGPresetFactory"), &Z_Registration_Info_UClass_UMMGPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGPresetFactory), 2855951667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresetFactory_h_3751186810(TEXT("/Script/UTC_ShaderLibrary"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
