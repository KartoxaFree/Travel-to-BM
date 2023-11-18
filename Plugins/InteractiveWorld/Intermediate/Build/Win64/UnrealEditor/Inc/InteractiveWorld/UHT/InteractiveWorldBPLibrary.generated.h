// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveWorldBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWorldInteractVolume;
class UTextureRenderTarget2D;
#ifdef INTERACTIVEWORLD_InteractiveWorldBPLibrary_generated_h
#error "InteractiveWorldBPLibrary.generated.h already included, missing '#pragma once' in InteractiveWorldBPLibrary.h"
#endif
#define INTERACTIVEWORLD_InteractiveWorldBPLibrary_generated_h

#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_SPARSE_DATA
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIW_AddWarning); \
	DECLARE_FUNCTION(execRefreshInteractVolume); \
	DECLARE_FUNCTION(execVector3ToVector2); \
	DECLARE_FUNCTION(execResizeRenderTarget2D);


#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_ACCESSORS
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveWorldBPLibrary(); \
	friend struct Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UInteractiveWorldBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveWorld"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveWorldBPLibrary)


#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveWorldBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveWorldBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveWorldBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveWorldBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveWorldBPLibrary(UInteractiveWorldBPLibrary&&); \
	NO_API UInteractiveWorldBPLibrary(const UInteractiveWorldBPLibrary&); \
public: \
	NO_API virtual ~UInteractiveWorldBPLibrary();


#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_9_PROLOG
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_SPARSE_DATA \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_RPC_WRAPPERS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_ACCESSORS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_INCLASS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVEWORLD_API UClass* StaticClass<class UInteractiveWorldBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
