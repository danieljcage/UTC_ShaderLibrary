// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_ShaderLibrary/Public/UI/GraphEditor/MMGGraphSchemaActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGGraphSchemaActions() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
UPackage* Z_Construct_UPackage__Script_UTC_ShaderLibrary();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGGraphSchemaAction();
// End Cross Module References

// Begin ScriptStruct FMMGGraphSchemaAction
static_assert(std::is_polymorphic<FMMGGraphSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FMMGGraphSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGGraphSchemaAction;
class UScriptStruct* FMMGGraphSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGGraphSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGGraphSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGGraphSchemaAction, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGGraphSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_MMGGraphSchemaAction.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGGraphSchemaAction>()
{
	return FMMGGraphSchemaAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGGraphSchemaAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GraphEditor/MMGGraphSchemaActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGGraphSchemaAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGGraphSchemaAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"MMGGraphSchemaAction",
	nullptr,
	0,
	sizeof(FMMGGraphSchemaAction),
	alignof(FMMGGraphSchemaAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGGraphSchemaAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGGraphSchemaAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGGraphSchemaAction()
{
	if (!Z_Registration_Info_UScriptStruct_MMGGraphSchemaAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGGraphSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FMMGGraphSchemaAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGGraphSchemaAction.InnerSingleton;
}
// End ScriptStruct FMMGGraphSchemaAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGGraphSchemaActions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMMGGraphSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FMMGGraphSchemaAction_Statics::NewStructOps, TEXT("MMGGraphSchemaAction"), &Z_Registration_Info_UScriptStruct_MMGGraphSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGGraphSchemaAction), 737444661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGGraphSchemaActions_h_1103480645(TEXT("/Script/UTC_ShaderLibrary"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGGraphSchemaActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGGraphSchemaActions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
