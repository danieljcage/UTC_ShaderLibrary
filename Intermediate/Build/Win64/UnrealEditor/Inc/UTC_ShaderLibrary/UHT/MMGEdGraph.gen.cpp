// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_ShaderLibrary/Public/UI/GraphEditor/MMGEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGEdGraph() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
UPackage* Z_Construct_UPackage__Script_UTC_ShaderLibrary();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGEdGraph();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGEdGraph_NoRegister();
UTC_SHADERLIBRARY_API UEnum* Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType();
// End Cross Module References

// Begin Enum ENodeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeType;
static UEnum* ENodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("ENodeType"));
	}
	return Z_Registration_Info_UEnum_ENodeType.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UEnum* StaticEnum<ENodeType>()
{
	return ENodeType_StaticEnum();
}
struct Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EMaskNode.Name", "EMaskNode" },
		{ "EMaterialAttributeNode.Name", "EMaterialAttributeNode" },
		{ "EOutputNode.Name", "EOutputNode" },
		{ "EUVsNode.Name", "EUVsNode" },
		{ "ModuleRelativePath", "Public/UI/GraphEditor/MMGEdGraph.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaterialAttributeNode", (int64)EMaterialAttributeNode },
		{ "EMaskNode", (int64)EMaskNode },
		{ "EUVsNode", (int64)EUVsNode },
		{ "EOutputNode", (int64)EOutputNode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	"ENodeType",
	"ENodeType",
	Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType()
{
	if (!Z_Registration_Info_UEnum_ENodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeType.InnerSingleton, Z_Construct_UEnum_UTC_ShaderLibrary_ENodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENodeType.InnerSingleton;
}
// End Enum ENodeType

// Begin Class UMMGEdGraph
void UMMGEdGraph::StaticRegisterNativesUMMGEdGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGEdGraph);
UClass* Z_Construct_UClass_UMMGEdGraph_NoRegister()
{
	return UMMGEdGraph::StaticClass();
}
struct Z_Construct_UClass_UMMGEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GraphEditor/MMGEdGraph.h" },
		{ "ModuleRelativePath", "Public/UI/GraphEditor/MMGEdGraph.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMGEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGEdGraph_Statics::ClassParams = {
	&UMMGEdGraph::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGEdGraph()
{
	if (!Z_Registration_Info_UClass_UMMGEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGEdGraph.OuterSingleton, Z_Construct_UClass_UMMGEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGEdGraph.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGEdGraph>()
{
	return UMMGEdGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGEdGraph);
UMMGEdGraph::~UMMGEdGraph() {}
// End Class UMMGEdGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENodeType_StaticEnum, TEXT("ENodeType"), &Z_Registration_Info_UEnum_ENodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1404308827U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMGEdGraph, UMMGEdGraph::StaticClass, TEXT("UMMGEdGraph"), &Z_Registration_Info_UClass_UMMGEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGEdGraph), 3148137853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_619770796(TEXT("/Script/UTC_ShaderLibrary"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
