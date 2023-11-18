// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveWorldSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWorldDrawingBoard;
class UInteractBrush;
#ifdef INTERACTIVEWORLD_InteractiveWorldSubsystem_generated_h
#error "InteractiveWorldSubsystem.generated.h already included, missing '#pragma once' in InteractiveWorldSubsystem.h"
#endif
#define INTERACTIVEWORLD_InteractiveWorldSubsystem_generated_h

#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_SPARSE_DATA
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRegisteredInteractBrushes); \
	DECLARE_FUNCTION(execGetRegisteredDrawingBoards); \
	DECLARE_FUNCTION(execUnregisterDrawingBoard); \
	DECLARE_FUNCTION(execRegisterDrawingBoard); \
	DECLARE_FUNCTION(execUnregisterBrush); \
	DECLARE_FUNCTION(execRegisterBrush);


#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_ACCESSORS
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveWorldSubsystem(); \
	friend struct Z_Construct_UClass_UInteractiveWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UInteractiveWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveWorld"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveWorldSubsystem)


#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveWorldSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveWorldSubsystem(UInteractiveWorldSubsystem&&); \
	NO_API UInteractiveWorldSubsystem(const UInteractiveWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveWorldSubsystem) \
	NO_API virtual ~UInteractiveWorldSubsystem();


#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_14_PROLOG
#define FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_SPARSE_DATA \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_ACCESSORS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVEWORLD_API UClass* StaticClass<class UInteractiveWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
