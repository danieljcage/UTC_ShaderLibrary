// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_ShaderLibrary/Public/UI/Presets/MMGPresets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMGPresets() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_UTC_ShaderLibrary();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGPresets();
UTC_SHADERLIBRARY_API UClass* Z_Construct_UClass_UMMGPresets_NoRegister();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetFunctionStruct();
UTC_SHADERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetStruct();
// End Cross Module References

// Begin ScriptStruct FMMGPresetCustomPackedStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGPresetCustomPackedStruct;
class UScriptStruct* FMMGPresetCustomPackedStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetCustomPackedStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGPresetCustomPackedStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGPresetCustomPackedStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetCustomPackedStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGPresetCustomPackedStruct>()
{
	return FMMGPresetCustomPackedStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom Pack */" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
		{ "ToolTip", "Custom Pack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_R_CustomPackAttributeType_MetaData[] = {
		{ "Category", "Custom Packed" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_G_CustomPackAttributeType_MetaData[] = {
		{ "Category", "Custom Packed" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_CustomPackAttributeType_MetaData[] = {
		{ "Category", "Custom Packed" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_CustomPackAttributeType_MetaData[] = {
		{ "Category", "Custom Packed" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_R_CustomPackAttributeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_G_CustomPackAttributeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_B_CustomPackAttributeType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_A_CustomPackAttributeType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGPresetCustomPackedStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewProp_R_CustomPackAttributeType = { "R_CustomPackAttributeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetCustomPackedStruct, R_CustomPackAttributeType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_R_CustomPackAttributeType_MetaData), NewProp_R_CustomPackAttributeType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewProp_G_CustomPackAttributeType = { "G_CustomPackAttributeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetCustomPackedStruct, G_CustomPackAttributeType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_G_CustomPackAttributeType_MetaData), NewProp_G_CustomPackAttributeType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewProp_B_CustomPackAttributeType = { "B_CustomPackAttributeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetCustomPackedStruct, B_CustomPackAttributeType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_CustomPackAttributeType_MetaData), NewProp_B_CustomPackAttributeType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewProp_A_CustomPackAttributeType = { "A_CustomPackAttributeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetCustomPackedStruct, A_CustomPackAttributeType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_CustomPackAttributeType_MetaData), NewProp_A_CustomPackAttributeType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewProp_R_CustomPackAttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewProp_G_CustomPackAttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewProp_B_CustomPackAttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewProp_A_CustomPackAttributeType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	&NewStructOps,
	"MMGPresetCustomPackedStruct",
	Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::PropPointers),
	sizeof(FMMGPresetCustomPackedStruct),
	alignof(FMMGPresetCustomPackedStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetCustomPackedStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGPresetCustomPackedStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetCustomPackedStruct.InnerSingleton;
}
// End ScriptStruct FMMGPresetCustomPackedStruct

// Begin ScriptStruct FMMGPresetChildMaskStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGPresetChildMaskStruct;
class UScriptStruct* FMMGPresetChildMaskStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetChildMaskStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGPresetChildMaskStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGPresetChildMaskStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetChildMaskStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGPresetChildMaskStruct>()
{
	return FMMGPresetChildMaskStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Child Mask */" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
		{ "ToolTip", "Child Mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskType_MetaData[] = {
		{ "Category", "Child Mask" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_Mask_MetaData[] = {
		{ "Category", "Child Mask" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_Mask_MetaData[] = {
		{ "Category", "Child Mask" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaskType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_A_Mask;
	static const UECodeGen_Private::FStrPropertyParams NewProp_B_Mask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGPresetChildMaskStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::NewProp_MaskType = { "MaskType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetChildMaskStruct, MaskType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskType_MetaData), NewProp_MaskType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::NewProp_A_Mask = { "A_Mask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetChildMaskStruct, A_Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_Mask_MetaData), NewProp_A_Mask_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::NewProp_B_Mask = { "B_Mask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetChildMaskStruct, B_Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_Mask_MetaData), NewProp_B_Mask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::NewProp_MaskType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::NewProp_A_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::NewProp_B_Mask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	&NewStructOps,
	"MMGPresetChildMaskStruct",
	Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::PropPointers),
	sizeof(FMMGPresetChildMaskStruct),
	alignof(FMMGPresetChildMaskStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetChildMaskStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGPresetChildMaskStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetChildMaskStruct.InnerSingleton;
}
// End ScriptStruct FMMGPresetChildMaskStruct

// Begin ScriptStruct FMMGPresetChildAttributeStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGPresetChildAttributeStruct;
class UScriptStruct* FMMGPresetChildAttributeStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetChildAttributeStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGPresetChildAttributeStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGPresetChildAttributeStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetChildAttributeStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGPresetChildAttributeStruct>()
{
	return FMMGPresetChildAttributeStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Child Attribute */" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
		{ "ToolTip", "Child Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildAttributeType_MetaData[] = {
		{ "Category", "Child Attribute" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAffectedByUVs_MetaData[] = {
		{ "Category", "Child Attribute" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isCustomPacked_MetaData[] = {
		{ "Category", "Child Attribute" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPack_MetaData[] = {
		{ "Category", "Child Attribute" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChildAttributeType;
	static void NewProp_isAffectedByUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAffectedByUVs;
	static void NewProp_isCustomPacked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isCustomPacked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGPresetChildAttributeStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_ChildAttributeType = { "ChildAttributeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetChildAttributeStruct, ChildAttributeType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildAttributeType_MetaData), NewProp_ChildAttributeType_MetaData) };
void Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_isAffectedByUVs_SetBit(void* Obj)
{
	((FMMGPresetChildAttributeStruct*)Obj)->isAffectedByUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_isAffectedByUVs = { "isAffectedByUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMMGPresetChildAttributeStruct), &Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_isAffectedByUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAffectedByUVs_MetaData), NewProp_isAffectedByUVs_MetaData) };
void Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_isCustomPacked_SetBit(void* Obj)
{
	((FMMGPresetChildAttributeStruct*)Obj)->isCustomPacked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_isCustomPacked = { "isCustomPacked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMMGPresetChildAttributeStruct), &Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_isCustomPacked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isCustomPacked_MetaData), NewProp_isCustomPacked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_CustomPack = { "CustomPack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetChildAttributeStruct, CustomPack), Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPack_MetaData), NewProp_CustomPack_MetaData) }; // 646481036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_ChildAttributeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_isAffectedByUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_isCustomPacked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewProp_CustomPack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	&NewStructOps,
	"MMGPresetChildAttributeStruct",
	Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::PropPointers),
	sizeof(FMMGPresetChildAttributeStruct),
	alignof(FMMGPresetChildAttributeStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetChildAttributeStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGPresetChildAttributeStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetChildAttributeStruct.InnerSingleton;
}
// End ScriptStruct FMMGPresetChildAttributeStruct

// Begin ScriptStruct FMMGPresetFunctionStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGPresetFunctionStruct;
class UScriptStruct* FMMGPresetFunctionStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetFunctionStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGPresetFunctionStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGPresetFunctionStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGPresetFunctionStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetFunctionStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGPresetFunctionStruct>()
{
	return FMMGPresetFunctionStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Function */" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
		{ "ToolTip", "Function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionType_MetaData[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVsType_MetaData[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildAttributes_MetaData[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildMasks_MetaData[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UVsType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildMasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildMasks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGPresetFunctionStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetFunctionStruct, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetFunctionStruct, FunctionType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionType_MetaData), NewProp_FunctionType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_UVsType = { "UVsType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetFunctionStruct, UVsType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVsType_MetaData), NewProp_UVsType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_ChildAttributes_Inner = { "ChildAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct, METADATA_PARAMS(0, nullptr) }; // 1250648613
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_ChildAttributes = { "ChildAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetFunctionStruct, ChildAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildAttributes_MetaData), NewProp_ChildAttributes_MetaData) }; // 1250648613
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_ChildMasks_Inner = { "ChildMasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct, METADATA_PARAMS(0, nullptr) }; // 3965328802
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_ChildMasks = { "ChildMasks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetFunctionStruct, ChildMasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildMasks_MetaData), NewProp_ChildMasks_MetaData) }; // 3965328802
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_FunctionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_UVsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_ChildAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_ChildAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_ChildMasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewProp_ChildMasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	&NewStructOps,
	"MMGPresetFunctionStruct",
	Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::PropPointers),
	sizeof(FMMGPresetFunctionStruct),
	alignof(FMMGPresetFunctionStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetFunctionStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetFunctionStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGPresetFunctionStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetFunctionStruct.InnerSingleton;
}
// End ScriptStruct FMMGPresetFunctionStruct

// Begin ScriptStruct FMMGPresetStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMGPresetStruct;
class UScriptStruct* FMMGPresetStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMGPresetStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMGPresetStruct, (UObject*)Z_Construct_UPackage__Script_UTC_ShaderLibrary(), TEXT("MMGPresetStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetStruct.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UScriptStruct* StaticStruct<FMMGPresetStruct>()
{
	return FMMGPresetStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMMGPresetStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Main Preset*/" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
		{ "ToolTip", "Main Preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Preset Infos" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetCategory_MetaData[] = {
		{ "Category", "Preset Infos" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[] = {
		{ "Category", "Preset Infos" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresetCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Functions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMGPresetStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetStruct, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewProp_PresetCategory = { "PresetCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetStruct, PresetCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetCategory_MetaData), NewProp_PresetCategory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMMGPresetFunctionStruct, METADATA_PARAMS(0, nullptr) }; // 3951189381
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMMGPresetStruct, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Functions_MetaData), NewProp_Functions_MetaData) }; // 3951189381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewProp_PresetCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewProp_Functions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewProp_Functions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
	nullptr,
	&NewStructOps,
	"MMGPresetStruct",
	Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::PropPointers),
	sizeof(FMMGPresetStruct),
	alignof(FMMGPresetStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMMGPresetStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMGPresetStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMGPresetStruct.InnerSingleton, Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MMGPresetStruct.InnerSingleton;
}
// End ScriptStruct FMMGPresetStruct

// Begin Class UMMGPresets
void UMMGPresets::StaticRegisterNativesUMMGPresets()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMGPresets);
UClass* Z_Construct_UClass_UMMGPresets_NoRegister()
{
	return UMMGPresets::StaticClass();
}
struct Z_Construct_UClass_UMMGPresets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Presets/MMGPresets.h" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[] = {
		{ "Category", "Preset Infos" },
		{ "ModuleRelativePath", "Public/UI/Presets/MMGPresets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Presets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMGPresets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMGPresets_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMMGPresetStruct, METADATA_PARAMS(0, nullptr) }; // 3922144861
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMGPresets_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMMGPresets, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presets_MetaData), NewProp_Presets_MetaData) }; // 3922144861
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMGPresets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMGPresets_Statics::NewProp_Presets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMGPresets_Statics::NewProp_Presets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGPresets_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMMGPresets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_ShaderLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGPresets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMGPresets_Statics::ClassParams = {
	&UMMGPresets::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMMGPresets_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMMGPresets_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMGPresets_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMGPresets_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMMGPresets()
{
	if (!Z_Registration_Info_UClass_UMMGPresets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMGPresets.OuterSingleton, Z_Construct_UClass_UMMGPresets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMMGPresets.OuterSingleton;
}
template<> UTC_SHADERLIBRARY_API UClass* StaticClass<UMMGPresets>()
{
	return UMMGPresets::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMMGPresets);
UMMGPresets::~UMMGPresets() {}
// End Class UMMGPresets

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresets_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMMGPresetCustomPackedStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGPresetCustomPackedStruct_Statics::NewStructOps, TEXT("MMGPresetCustomPackedStruct"), &Z_Registration_Info_UScriptStruct_MMGPresetCustomPackedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGPresetCustomPackedStruct), 646481036U) },
		{ FMMGPresetChildMaskStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGPresetChildMaskStruct_Statics::NewStructOps, TEXT("MMGPresetChildMaskStruct"), &Z_Registration_Info_UScriptStruct_MMGPresetChildMaskStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGPresetChildMaskStruct), 3965328802U) },
		{ FMMGPresetChildAttributeStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGPresetChildAttributeStruct_Statics::NewStructOps, TEXT("MMGPresetChildAttributeStruct"), &Z_Registration_Info_UScriptStruct_MMGPresetChildAttributeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGPresetChildAttributeStruct), 1250648613U) },
		{ FMMGPresetFunctionStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGPresetFunctionStruct_Statics::NewStructOps, TEXT("MMGPresetFunctionStruct"), &Z_Registration_Info_UScriptStruct_MMGPresetFunctionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGPresetFunctionStruct), 3951189381U) },
		{ FMMGPresetStruct::StaticStruct, Z_Construct_UScriptStruct_FMMGPresetStruct_Statics::NewStructOps, TEXT("MMGPresetStruct"), &Z_Registration_Info_UScriptStruct_MMGPresetStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMGPresetStruct), 3922144861U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMMGPresets, UMMGPresets::StaticClass, TEXT("UMMGPresets"), &Z_Registration_Info_UClass_UMMGPresets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMGPresets), 885455634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresets_h_1198067336(TEXT("/Script/UTC_ShaderLibrary"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresets_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresets_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_Presets_MMGPresets_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
