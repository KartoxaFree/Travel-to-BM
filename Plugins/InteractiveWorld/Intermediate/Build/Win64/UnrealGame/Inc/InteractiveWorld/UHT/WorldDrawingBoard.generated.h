// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldDrawingBoard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWorldInteractVolume;
class UTextureRenderTarget2D;
#ifdef INTERACTIVEWORLD_WorldDrawingBoard_generated_h
#error "WorldDrawingBoard.generated.h already included, missing '#pragma once' in WorldDrawingBoard.h"
#endif
#define INTERACTIVEWORLD_WorldDrawingBoard_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_RPC_WRAPPERS \
	virtual void PostSimulate_Implementation(); \
	virtual void PreSimulate_Implementation(); \
	virtual void UpdateDrawingBoardState_Implementation(); \
 \
	DECLARE_FUNCTION(execGetRTDrawOn); \
	DECLARE_FUNCTION(execSetRTDrawOn); \
	DECLARE_FUNCTION(execGetTimeFromLastDraw); \
	DECLARE_FUNCTION(execGetInteractHeight); \
	DECLARE_FUNCTION(execGetIsSimulating); \
	DECLARE_FUNCTION(execGetActiveState); \
	DECLARE_FUNCTION(execSetDrawingBoardActive); \
	DECLARE_FUNCTION(execGetInteractVolumes); \
	DECLARE_FUNCTION(execResetInteractVolumes); \
	DECLARE_FUNCTION(execGetUseInteractVolume); \
	DECLARE_FUNCTION(execResetUseInteractVolume); \
	DECLARE_FUNCTION(execWorldToCanvasBrush); \
	DECLARE_FUNCTION(execWorldToCanvasUV); \
	DECLARE_FUNCTION(execWorldToCanvasSize); \
	DECLARE_FUNCTION(execWorldToCanvasRotation); \
	DECLARE_FUNCTION(execSetCanvasWorldLocation); \
	DECLARE_FUNCTION(execPostSimulate); \
	DECLARE_FUNCTION(execPreSimulate); \
	DECLARE_FUNCTION(execUpdateDrawingBoardState);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PostSimulate_Implementation(); \
	virtual void PreSimulate_Implementation(); \
	virtual void UpdateDrawingBoardState_Implementation(); \
 \
	DECLARE_FUNCTION(execGetRTDrawOn); \
	DECLARE_FUNCTION(execSetRTDrawOn); \
	DECLARE_FUNCTION(execGetTimeFromLastDraw); \
	DECLARE_FUNCTION(execGetInteractHeight); \
	DECLARE_FUNCTION(execGetIsSimulating); \
	DECLARE_FUNCTION(execGetActiveState); \
	DECLARE_FUNCTION(execSetDrawingBoardActive); \
	DECLARE_FUNCTION(execGetInteractVolumes); \
	DECLARE_FUNCTION(execResetInteractVolumes); \
	DECLARE_FUNCTION(execGetUseInteractVolume); \
	DECLARE_FUNCTION(execResetUseInteractVolume); \
	DECLARE_FUNCTION(execWorldToCanvasBrush); \
	DECLARE_FUNCTION(execWorldToCanvasUV); \
	DECLARE_FUNCTION(execWorldToCanvasSize); \
	DECLARE_FUNCTION(execWorldToCanvasRotation); \
	DECLARE_FUNCTION(execSetCanvasWorldLocation); \
	DECLARE_FUNCTION(execPostSimulate); \
	DECLARE_FUNCTION(execPreSimulate); \
	DECLARE_FUNCTION(execUpdateDrawingBoardState);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldDrawingBoard(); \
	friend struct Z_Construct_UClass_AWorldDrawingBoard_Statics; \
public: \
	DECLARE_CLASS(AWorldDrawingBoard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveWorld"), NO_API) \
	DECLARE_SERIALIZER(AWorldDrawingBoard)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWorldDrawingBoard(); \
	friend struct Z_Construct_UClass_AWorldDrawingBoard_Statics; \
public: \
	DECLARE_CLASS(AWorldDrawingBoard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveWorld"), NO_API) \
	DECLARE_SERIALIZER(AWorldDrawingBoard)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldDrawingBoard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldDrawingBoard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldDrawingBoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldDrawingBoard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldDrawingBoard(AWorldDrawingBoard&&); \
	NO_API AWorldDrawingBoard(const AWorldDrawingBoard&); \
public: \
	NO_API virtual ~AWorldDrawingBoard();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldDrawingBoard(AWorldDrawingBoard&&); \
	NO_API AWorldDrawingBoard(const AWorldDrawingBoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldDrawingBoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldDrawingBoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldDrawingBoard) \
	NO_API virtual ~AWorldDrawingBoard();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVEWORLD_API UClass* StaticClass<class AWorldDrawingBoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
