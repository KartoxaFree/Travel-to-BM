// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldInteractVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AWorldDrawingBoard;
class UInteractBrush;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INTERACTIVEWORLD_WorldInteractVolume_generated_h
#error "WorldInteractVolume.generated.h already included, missing '#pragma once' in WorldInteractVolume.h"
#endif
#define INTERACTIVEWORLD_WorldInteractVolume_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execManualInteractBrushLeaveArea); \
	DECLARE_FUNCTION(execManualInteractBrushEnterArea); \
	DECLARE_FUNCTION(execGetDrawingBoards); \
	DECLARE_FUNCTION(execOnActorLeavedArea); \
	DECLARE_FUNCTION(execOnActorEnteredArea);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execManualInteractBrushLeaveArea); \
	DECLARE_FUNCTION(execManualInteractBrushEnterArea); \
	DECLARE_FUNCTION(execGetDrawingBoards); \
	DECLARE_FUNCTION(execOnActorLeavedArea); \
	DECLARE_FUNCTION(execOnActorEnteredArea);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldInteractVolume(); \
	friend struct Z_Construct_UClass_AWorldInteractVolume_Statics; \
public: \
	DECLARE_CLASS(AWorldInteractVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveWorld"), NO_API) \
	DECLARE_SERIALIZER(AWorldInteractVolume)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWorldInteractVolume(); \
	friend struct Z_Construct_UClass_AWorldInteractVolume_Statics; \
public: \
	DECLARE_CLASS(AWorldInteractVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveWorld"), NO_API) \
	DECLARE_SERIALIZER(AWorldInteractVolume)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldInteractVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldInteractVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldInteractVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldInteractVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldInteractVolume(AWorldInteractVolume&&); \
	NO_API AWorldInteractVolume(const AWorldInteractVolume&); \
public: \
	NO_API virtual ~AWorldInteractVolume();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldInteractVolume(AWorldInteractVolume&&); \
	NO_API AWorldInteractVolume(const AWorldInteractVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldInteractVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldInteractVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldInteractVolume) \
	NO_API virtual ~AWorldInteractVolume();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVEWORLD_API UClass* StaticClass<class AWorldInteractVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
