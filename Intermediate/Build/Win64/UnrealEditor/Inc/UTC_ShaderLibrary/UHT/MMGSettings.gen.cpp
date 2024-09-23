// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_ShaderLibrary/Public/UI/MMGSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDomain();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_UTC_ShaderLibrary();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGAddToMaterial();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGAddToMaterial_NoRegister();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGGenerateMaterial();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGGenerateMaterial_NoRegister();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGGraphSettings();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGGraphSettings_NoRegister();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGMaterialSettings();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGMaterialSettings_NoRegister();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGTreeViewSettings();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGTreeViewSettings_NoRegister();
UTC_SHADERLIBRARY_API UEnum* Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGAddToMaterialStruct();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct();
// End Cross Module References

// Begin ScriptStruct FMMGGenerateMaterialStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGGenerateMaterialStruct;
class UScriptStruct* FMMGGenerateMaterialStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGGenerateMaterialStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGGenerateMaterialStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGGenerateMaterialStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGGenerateMaterialStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGGenerateMaterialStruct>()
{
	return FMMGGenerateMaterialStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------\n//Generate Settings\n" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "ToolTip", "Generate Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialName_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Material Name" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialDestination_MetaData[] = {
		{ "Category", "Settings" },
		{ "ContentDir", "" },
		{ "DisplayName", "Material Path" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenMaterialInst_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Generate Material Instance" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_materialName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_materialDestination;
	static void NewProp_GenMaterialInst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenMaterialInst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGGenerateMaterialStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewProp_materialName = { "materialName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGGenerateMaterialStruct, materialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialName_MetaData), NewProp_materialName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewProp_materialDestination = { "materialDestination", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGGenerateMaterialStruct, materialDestination), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialDestination_MetaData), NewProp_materialDestination_MetaData) };
void Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewProp_GenMaterialInst_SetBit(void* Obj)
{
	((FMMGGenerateMaterialStruct*)Obj)->GenMaterialInst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewProp_GenMaterialInst = { "GenMaterialInst", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMMGGenerateMaterialStruct), &Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewProp_GenMaterialInst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenMaterialInst_MetaData), NewProp_GenMaterialInst_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewProp_materialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewProp_materialDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewProp_GenMaterialInst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	&NewStructOps,
	"MMGGenerateMaterialStruct",
	Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::PropPointers),
	sizeof(FMMGGenerateMaterialStruct),
	alignof(FMMGGenerateMaterialStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGGenerateMaterialStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGGenerateMaterialStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGGenerateMaterialStruct.InnerSingleton;
}
// End ScriptStruct FMMGGenerateMaterialStruct

// Begin Class UMMGGenerateMaterial
void UMMGGenerateMaterial::StaticRegisterNativesUMMGGenerateMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGGenerateMaterial);
UClass* Z_Construct_UClass_UMMGGenerateMaterial_NoRegister()
{
	return UMMGGenerateMaterial::StaticClass();
}
struct Z_Construct_UClass_UMMGGenerateMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MMGSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateMaterialClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerateMaterialClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGGenerateMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMGGenerateMaterial_Statics::NewProp_GenerateMaterialClass = { "GenerateMaterialClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMGGenerateMaterial, GenerateMaterialClass), Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateMaterialClass_MetaData), NewProp_GenerateMaterialClass_MetaData) }; // 1525673465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMGGenerateMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMGGenerateMaterial_Statics::NewProp_GenerateMaterialClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGGenerateMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMMGGenerateMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGGenerateMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGGenerateMaterial_Statics::ClassParams = {
	&UMMGGenerateMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMMGGenerateMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMMGGenerateMaterial_Statics::PropPointers),
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGGenerateMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGGenerateMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGGenerateMaterial()
{
	if (!Z_Registration_Info_UClass_UMMGGenerateMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGGenerateMaterial.OuterSingleton, Z_Construct_UClass_UMMGGenerateMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGGenerateMaterial.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGGenerateMaterial>()
{
	return UMMGGenerateMaterial::StaticClass();
}
UMMGGenerateMaterial::UMMGGenerateMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGGenerateMaterial);
UMMGGenerateMaterial::~UMMGGenerateMaterial() {}
// End Class UMMGGenerateMaterial

// Begin ScriptStruct FMMGAddToMaterialStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGAddToMaterialStruct;
class UScriptStruct* FMMGAddToMaterialStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGAddToMaterialStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGAddToMaterialStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGAddToMaterialStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGAddToMaterialStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGAddToMaterialStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGAddToMaterialStruct>()
{
	return FMMGAddToMaterialStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------\n//Add Settings\n" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "ToolTip", "Add Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaterial_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Target Material" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGAddToMaterialStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::NewProp_TargetMaterial = { "TargetMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGAddToMaterialStruct, TargetMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMaterial_MetaData), NewProp_TargetMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::NewProp_TargetMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	&NewStructOps,
	"MMGAddToMaterialStruct",
	Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::PropPointers),
	sizeof(FMMGAddToMaterialStruct),
	alignof(FMMGAddToMaterialStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGAddToMaterialStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGAddToMaterialStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGAddToMaterialStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGAddToMaterialStruct.InnerSingleton;
}
// End ScriptStruct FMMGAddToMaterialStruct

// Begin Class UMMGAddToMaterial
void UMMGAddToMaterial::StaticRegisterNativesUMMGAddToMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGAddToMaterial);
UClass* Z_Construct_UClass_UMMGAddToMaterial_NoRegister()
{
	return UMMGAddToMaterial::StaticClass();
}
struct Z_Construct_UClass_UMMGAddToMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MMGSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddToMaterialClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddToMaterialClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGAddToMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMGAddToMaterial_Statics::NewProp_AddToMaterialClass = { "AddToMaterialClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMGAddToMaterial, AddToMaterialClass), Z_Construct_UScriptStruct_FMMGAddToMaterialStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddToMaterialClass_MetaData), NewProp_AddToMaterialClass_MetaData) }; // 2813475458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMGAddToMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMGAddToMaterial_Statics::NewProp_AddToMaterialClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGAddToMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMMGAddToMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGAddToMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGAddToMaterial_Statics::ClassParams = {
	&UMMGAddToMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMMGAddToMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMMGAddToMaterial_Statics::PropPointers),
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGAddToMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGAddToMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGAddToMaterial()
{
	if (!Z_Registration_Info_UClass_UMMGAddToMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGAddToMaterial.OuterSingleton, Z_Construct_UClass_UMMGAddToMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGAddToMaterial.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGAddToMaterial>()
{
	return UMMGAddToMaterial::StaticClass();
}
UMMGAddToMaterial::UMMGAddToMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGAddToMaterial);
UMMGAddToMaterial::~UMMGAddToMaterial() {}
// End Class UMMGAddToMaterial

// Begin Class UMMGGraphSettings
void UMMGGraphSettings::StaticRegisterNativesUMMGGraphSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGGraphSettings);
UClass* Z_Construct_UClass_UMMGGraphSettings_NoRegister()
{
	return UMMGGraphSettings::StaticClass();
}
struct Z_Construct_UClass_UMMGGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//-------------------------------------------------------------------------------------------------------------\n//Graph\n" },
		{ "IncludePath", "UI/MMGSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "ToolTip", "Graph" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGGraphSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMGGraphSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGGraphSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGGraphSettings_Statics::ClassParams = {
	&UMMGGraphSettings::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGGraphSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGGraphSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGGraphSettings()
{
	if (!Z_Registration_Info_UClass_UMMGGraphSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGGraphSettings.OuterSingleton, Z_Construct_UClass_UMMGGraphSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGGraphSettings.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGGraphSettings>()
{
	return UMMGGraphSettings::StaticClass();
}
UMMGGraphSettings::UMMGGraphSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGGraphSettings);
UMMGGraphSettings::~UMMGGraphSettings() {}
// End Class UMMGGraphSettings

// Begin Class UMMGTreeViewSettings
void UMMGTreeViewSettings::StaticRegisterNativesUMMGTreeViewSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGTreeViewSettings);
UClass* Z_Construct_UClass_UMMGTreeViewSettings_NoRegister()
{
	return UMMGTreeViewSettings::StaticClass();
}
struct Z_Construct_UClass_UMMGTreeViewSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------\n//TreeView List\n" },
		{ "IncludePath", "UI/MMGSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "ToolTip", "TreeView List" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGTreeViewSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMMGTreeViewSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGTreeViewSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGTreeViewSettings_Statics::ClassParams = {
	&UMMGTreeViewSettings::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGTreeViewSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGTreeViewSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGTreeViewSettings()
{
	if (!Z_Registration_Info_UClass_UMMGTreeViewSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGTreeViewSettings.OuterSingleton, Z_Construct_UClass_UMMGTreeViewSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGTreeViewSettings.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGTreeViewSettings>()
{
	return UMMGTreeViewSettings::StaticClass();
}
UMMGTreeViewSettings::UMMGTreeViewSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGTreeViewSettings);
UMMGTreeViewSettings::~UMMGTreeViewSettings() {}
// End Class UMMGTreeViewSettings

// Begin Enum EMAttributes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMAttributes;
static UEnum* EMAttributes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMAttributes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMAttributes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("EMAttributes"));
	}
	return Z_Registration_Info_UEnum_EMAttributes.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UEnum* StaticEnum<EMAttributes>()
{
	return EMAttributes_StaticEnum();
}
struct Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AmbientOcclusion.DisplayName", "Ambient Occlusion" },
		{ "AmbientOcclusion.Name", "AmbientOcclusion" },
		{ "BaseColor.DisplayName", "Base Color" },
		{ "BaseColor.Name", "BaseColor" },
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------\n//DT Struct\n" },
		{ "EmissiveColor.DisplayName", "Emissive Color" },
		{ "EmissiveColor.Name", "EmissiveColor" },
		{ "Mask.DisplayName", "Mask" },
		{ "Mask.Name", "Mask" },
		{ "Metallic.DisplayName", "Metallic" },
		{ "Metallic.Name", "Metallic" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "Normal" },
		{ "Opacity.DisplayName", "Opacity" },
		{ "Opacity.Name", "Opacity" },
		{ "OpacityMask.DisplayName", "Opacity Mask" },
		{ "OpacityMask.Name", "OpacityMask" },
		{ "PixelDepthOffset.DisplayName", "Pixel Depth Offset" },
		{ "PixelDepthOffset.Name", "PixelDepthOffset" },
		{ "Roughness.DisplayName", "Roughness" },
		{ "Roughness.Name", "Roughness" },
		{ "Specular.DisplayName", "Specular" },
		{ "Specular.Name", "Specular" },
		{ "SubsurfaceColor.DisplayName", "Subsurface Color" },
		{ "SubsurfaceColor.Name", "SubsurfaceColor" },
		{ "ToolTip", "DT Struct" },
		{ "UVs.DisplayName", "UVs" },
		{ "UVs.Name", "UVs" },
		{ "WorldPositionOffset.DisplayName", "World Position Offset" },
		{ "WorldPositionOffset.Name", "WorldPositionOffset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Mask", (int64)Mask },
		{ "UVs", (int64)UVs },
		{ "BaseColor", (int64)BaseColor },
		{ "Metallic", (int64)Metallic },
		{ "Specular", (int64)Specular },
		{ "Roughness", (int64)Roughness },
		{ "EmissiveColor", (int64)EmissiveColor },
		{ "Opacity", (int64)Opacity },
		{ "OpacityMask", (int64)OpacityMask },
		{ "Normal", (int64)Normal },
		{ "WorldPositionOffset", (int64)WorldPositionOffset },
		{ "SubsurfaceColor", (int64)SubsurfaceColor },
		{ "AmbientOcclusion", (int64)AmbientOcclusion },
		{ "PixelDepthOffset", (int64)PixelDepthOffset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	"EMAttributes",
	"EMAttributes",
	Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes()
{
	if (!Z_Registration_Info_UEnum_EMAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMAttributes.InnerSingleton, Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMAttributes.InnerSingleton;
}
// End Enum EMAttributes

// Begin ScriptStruct FMMGMaterialFunctionStruct
static_assert(std::is_polymorphic<FMMGMaterialFunctionStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMMGMaterialFunctionStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGMaterialFunctionStruct;
class UScriptStruct* FMMGMaterialFunctionStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGMaterialFunctionStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGMaterialFunctionStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGMaterialFunctionStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGMaterialFunctionStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGMaterialFunctionStruct>()
{
	return FMMGMaterialFunctionStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunction_MetaData[] = {
		{ "Category", "MaterialFunctionInfos" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributeType_MetaData[] = {
		{ "Category", "MaterialFunctionInfos" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialGroup_MetaData[] = {
		{ "Category", "MaterialFunctionInfos" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MMG_MenuCategory_MetaData[] = {
		{ "Category", "MaterialFunctionInfos" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialAttributeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialGroup;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MMG_MenuCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGMaterialFunctionStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGMaterialFunctionStruct, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFunction_MetaData), NewProp_MaterialFunction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewProp_MaterialAttributeType = { "MaterialAttributeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGMaterialFunctionStruct, MaterialAttributeType), Z_Construct_UEnum_UTC_ShaderLibrary_EMAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributeType_MetaData), NewProp_MaterialAttributeType_MetaData) }; // 657387335
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewProp_MaterialGroup = { "MaterialGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGMaterialFunctionStruct, MaterialGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialGroup_MetaData), NewProp_MaterialGroup_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewProp_MMG_MenuCategory = { "MMG_MenuCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGMaterialFunctionStruct, MMG_MenuCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MMG_MenuCategory_MetaData), NewProp_MMG_MenuCategory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewProp_MaterialFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewProp_MaterialAttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewProp_MaterialGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewProp_MMG_MenuCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MMGMaterialFunctionStruct",
	Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::PropPointers),
	sizeof(FMMGMaterialFunctionStruct),
	alignof(FMMGMaterialFunctionStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGMaterialFunctionStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGMaterialFunctionStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGMaterialFunctionStruct.InnerSingleton;
}
// End ScriptStruct FMMGMaterialFunctionStruct

// Begin ScriptStruct FMMGMaterialSettingsStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGMaterialSettingsStruct;
class UScriptStruct* FMMGMaterialSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGMaterialSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGMaterialSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGMaterialSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGMaterialSettingsStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGMaterialSettingsStruct>()
{
	return FMMGMaterialSettingsStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------\n//Material Settings\n" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "ToolTip", "Material Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDomain_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "DisplayName", "Material Domain" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "DisplayName", "Blend Mode" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "DisplayName", "Shading Model" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "DisplayName", "Two Sided" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialDomain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
	static void NewProp_TwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGMaterialSettingsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_MaterialDomain = { "MaterialDomain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGMaterialSettingsStruct, MaterialDomain), Z_Construct_UEnum_Engine_EMaterialDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDomain_MetaData), NewProp_MaterialDomain_MetaData) }; // 1070349904
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGMaterialSettingsStruct, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 1831819339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGMaterialSettingsStruct, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingModel_MetaData), NewProp_ShadingModel_MetaData) }; // 1797132865
void Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_TwoSided_SetBit(void* Obj)
{
	((FMMGMaterialSettingsStruct*)Obj)->TwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMMGMaterialSettingsStruct), &Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwoSided_MetaData), NewProp_TwoSided_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_MaterialDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_ShadingModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewProp_TwoSided,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	&NewStructOps,
	"MMGMaterialSettingsStruct",
	Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::PropPointers),
	sizeof(FMMGMaterialSettingsStruct),
	alignof(FMMGMaterialSettingsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGMaterialSettingsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGMaterialSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGMaterialSettingsStruct.InnerSingleton;
}
// End ScriptStruct FMMGMaterialSettingsStruct

// Begin Class UMMGMaterialSettings
void UMMGMaterialSettings::StaticRegisterNativesUMMGMaterialSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGMaterialSettings);
UClass* Z_Construct_UClass_UMMGMaterialSettings_NoRegister()
{
	return UMMGMaterialSettings::StaticClass();
}
struct Z_Construct_UClass_UMMGMaterialSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MMGSettings.h" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigClass_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ModuleRelativePath", "Public/UI/MMGSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGMaterialSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMGMaterialSettings_Statics::NewProp_ConfigClass = { "ConfigClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMGMaterialSettings, ConfigClass), Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigClass_MetaData), NewProp_ConfigClass_MetaData) }; // 4250947931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMGMaterialSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMGMaterialSettings_Statics::NewProp_ConfigClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGMaterialSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMMGMaterialSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGMaterialSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGMaterialSettings_Statics::ClassParams = {
	&UMMGMaterialSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMMGMaterialSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMMGMaterialSettings_Statics::PropPointers),
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGMaterialSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGMaterialSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGMaterialSettings()
{
	if (!Z_Registration_Info_UClass_UMMGMaterialSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGMaterialSettings.OuterSingleton, Z_Construct_UClass_UMMGMaterialSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGMaterialSettings.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGMaterialSettings>()
{
	return UMMGMaterialSettings::StaticClass();
}
UMMGMaterialSettings::UMMGMaterialSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGMaterialSettings);
UMMGMaterialSettings::~UMMGMaterialSettings() {}
// End Class UMMGMaterialSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_MMGSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMAttributes_StaticEnum, TEXT("EMAttributes"), &Z_Registration_Info_UEnum_EMAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 657387335U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMMGGenerateMaterialStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGGenerateMaterialStruct_Statics::NewStructOps, TEXT("MMGGenerateMaterialStruct"), &Z_Registration_Info_UScriptStruct_MMGGenerateMaterialStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGGenerateMaterialStruct), 1525673465U) },
		{ FMMGAddToMaterialStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGAddToMaterialStruct_Statics::NewStructOps, TEXT("MMGAddToMaterialStruct"), &Z_Registration_Info_UScriptStruct_MMGAddToMaterialStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGAddToMaterialStruct), 2813475458U) },
		{ FMMGMaterialFunctionStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGMaterialFunctionStruct_Statics::NewStructOps, TEXT("MMGMaterialFunctionStruct"), &Z_Registration_Info_UScriptStruct_MMGMaterialFunctionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGMaterialFunctionStruct), 893017494U) },
		{ FMMGMaterialSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGMaterialSettingsStruct_Statics::NewStructOps, TEXT("MMGMaterialSettingsStruct"), &Z_Registration_Info_UScriptStruct_MMGMaterialSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGMaterialSettingsStruct), 4250947931U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMGGenerateMaterial, UMMGGenerateMaterial::StaticClass, TEXT("UMMGGenerateMaterial"), &Z_Registration_Info_UClass_UMMGGenerateMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGGenerateMaterial), 2216984280U) },
		{ Z_Construct_UClass_UMMGAddToMaterial, UMMGAddToMaterial::StaticClass, TEXT("UMMGAddToMaterial"), &Z_Registration_Info_UClass_UMMGAddToMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGAddToMaterial), 4044657791U) },
		{ Z_Construct_UClass_UMMGGraphSettings, UMMGGraphSettings::StaticClass, TEXT("UMMGGraphSettings"), &Z_Registration_Info_UClass_UMMGGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGGraphSettings), 1216561857U) },
		{ Z_Construct_UClass_UMMGTreeViewSettings, UMMGTreeViewSettings::StaticClass, TEXT("UMMGTreeViewSettings"), &Z_Registration_Info_UClass_UMMGTreeViewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGTreeViewSettings), 419558755U) },
		{ Z_Construct_UClass_UMMGMaterialSettings, UMMGMaterialSettings::StaticClass, TEXT("UMMGMaterialSettings"), &Z_Registration_Info_UClass_UMMGMaterialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGMaterialSettings), 794400647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_MMGSettings_h_4126461737(TEXT("/Script/UTC_ShaderLibrary"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_MMGSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_MMGSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_MMGSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_MMGSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_MMGSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_MMGSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
