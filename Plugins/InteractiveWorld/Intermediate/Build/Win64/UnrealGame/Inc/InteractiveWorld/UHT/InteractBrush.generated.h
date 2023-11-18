// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractBrush.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWorldDrawingBoard;
class UCanvas;
#ifdef INTERACTIVEWORLD_InteractBrush_generated_h
#error "InteractBrush.generated.h already included, missing '#pragma once' in InteractBrush.h"
#endif
#define INTERACTIVEWORLD_InteractBrush_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_RPC_WRAPPERS \
	virtual void DrawOnRT_Implementation(AWorldDrawingBoard* DrawingBoard, UCanvas* CanvasDrawOn, FVector2D CanvasSize, float InterpolateRate, int32 DrawTimes); \
	virtual bool UpdateDrawInfo_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentDrawSucceed); \
	DECLARE_FUNCTION(execGetLastDrawSucceed); \
	DECLARE_FUNCTION(execDrawOnRT); \
	DECLARE_FUNCTION(execUpdateDrawInfo); \
	DECLARE_FUNCTION(execDrawBrush); \
	DECLARE_FUNCTION(execGetCullRadius); \
	DECLARE_FUNCTION(execGetCurrentTransform);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DrawOnRT_Implementation(AWorldDrawingBoard* DrawingBoard, UCanvas* CanvasDrawOn, FVector2D CanvasSize, float InterpolateRate, int32 DrawTimes); \
	virtual bool UpdateDrawInfo_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentDrawSucceed); \
	DECLARE_FUNCTION(execGetLastDrawSucceed); \
	DECLARE_FUNCTION(execDrawOnRT); \
	DECLARE_FUNCTION(execUpdateDrawInfo); \
	DECLARE_FUNCTION(execDrawBrush); \
	DECLARE_FUNCTION(execGetCullRadius); \
	DECLARE_FUNCTION(execGetCurrentTransform);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractBrush(); \
	friend struct Z_Construct_UClass_UInteractBrush_Statics; \
public: \
	DECLARE_CLASS(UInteractBrush, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveWorld"), NO_API) \
	DECLARE_SERIALIZER(UInteractBrush)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInteractBrush(); \
	friend struct Z_Construct_UClass_UInteractBrush_Statics; \
public: \
	DECLARE_CLASS(UInteractBrush, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveWorld"), NO_API) \
	DECLARE_SERIALIZER(UInteractBrush)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractBrush(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractBrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractBrush); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractBrush(UInteractBrush&&); \
	NO_API UInteractBrush(const UInteractBrush&); \
public: \
	NO_API virtual ~UInteractBrush();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractBrush(UInteractBrush&&); \
	NO_API UInteractBrush(const UInteractBrush&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractBrush); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractBrush) \
	NO_API virtual ~UInteractBrush();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVEWORLD_API UClass* StaticClass<class UInteractBrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
