// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_ShaderLibrary/Public/UI/GraphEditor/MMGEdGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGEdGraphNode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_UTC_ShaderLibrary();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGEdGraphNode();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGEdGraphNode_NoRegister();
// End Cross Module References

// Begin Class UMMGEdGraphNode
void UMMGEdGraphNode::StaticRegisterNativesUMMGEdGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGEdGraphNode);
UClass* Z_Construct_UClass_UMMGEdGraphNode_NoRegister()
{
	return UMMGEdGraphNode::StaticClass();
}
struct Z_Construct_UClass_UMMGEdGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GraphEditor/MMGEdGraphNode.h" },
		{ "ModuleRelativePath", "Public/UI/GraphEditor/MMGEdGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGEdGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMGEdGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGEdGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGEdGraphNode_Statics::ClassParams = {
	&UMMGEdGraphNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGEdGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGEdGraphNode()
{
	if (!Z_Registration_Info_UClass_UMMGEdGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGEdGraphNode.OuterSingleton, Z_Construct_UClass_UMMGEdGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGEdGraphNode.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGEdGraphNode>()
{
	return UMMGEdGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGEdGraphNode);
UMMGEdGraphNode::~UMMGEdGraphNode() {}
// End Class UMMGEdGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMGEdGraphNode, UMMGEdGraphNode::StaticClass, TEXT("UMMGEdGraphNode"), &Z_Registration_Info_UClass_UMMGEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGEdGraphNode), 1930932807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraphNode_h_1868002479(TEXT("/Script/UTC_ShaderLibrary"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
