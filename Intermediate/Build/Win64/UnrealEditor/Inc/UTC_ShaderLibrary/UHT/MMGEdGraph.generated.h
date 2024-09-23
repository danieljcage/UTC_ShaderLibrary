// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GraphEditor/MMGEdGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UTC_SHADERLIBRARY_MMGEdGraph_generated_h
#error "MMGEdGraph.generated.h already included, missing '#pragma once' in MMGEdGraph.h"
#endif
#define UTC_SHADERLIBRARY_MMGEdGraph_generated_h

#define FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMMGEdGraph(); \
	friend struct Z_Construct_UClass_UMMGEdGraph_Statics; \
public: \
	DECLARE_CLASS(UMMGEdGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UTC_ShaderLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMMGEdGraph)


#define FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMGEdGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMGEdGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMGEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMGEdGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMMGEdGraph(UMMGEdGraph&&); \
	UMMGEdGraph(const UMMGEdGraph&); \
public: \
	NO_API virtual ~UMMGEdGraph();


#define FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_22_PROLOG
#define FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_25_INCLASS \
	FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTC_SHADERLIBRARY_API UClass* StaticClass<class UMMGEdGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_UTC_ShaderLibrary_Source_UTC_ShaderLibrary_Public_UI_GraphEditor_MMGEdGraph_h


#define FOREACH_ENUM_ENODETYPE(op) \
	op(EMaterialAttributeNode) \
	op(EMaskNode) \
	op(EUVsNode) \
	op(EOutputNode) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
