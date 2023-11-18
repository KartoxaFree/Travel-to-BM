// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveWorld/Public/WorldDrawingBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldDrawingBoard() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldDrawingBoard();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldDrawingBoard_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldInteractVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveWorld();
// End Cross Module References
	DEFINE_FUNCTION(AWorldDrawingBoard::execGetRTDrawOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRTDrawOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execSetRTDrawOn)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_NewRT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRTDrawOn(Z_Param_NewRT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execGetTimeFromLastDraw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeFromLastDraw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execGetInteractHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInteractHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execGetIsSimulating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsSimulating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execGetActiveState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActiveState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execSetDrawingBoardActive)
	{
		P_GET_UBOOL(Z_Param_Active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrawingBoardActive(Z_Param_Active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execGetInteractVolumes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AWorldInteractVolume*>*)Z_Param__Result=P_THIS->GetInteractVolumes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execResetInteractVolumes)
	{
		P_GET_TARRAY(AWorldInteractVolume*,Z_Param_NewInteractVolumes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInteractVolumes(Z_Param_NewInteractVolumes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execGetUseInteractVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseInteractVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execResetUseInteractVolume)
	{
		P_GET_UBOOL(Z_Param_NewUseInteractVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetUseInteractVolume(Z_Param_NewUseInteractVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execWorldToCanvasBrush)
	{
		P_GET_STRUCT(FVector2D,Z_Param_BrushLocation);
		P_GET_STRUCT(FVector2D,Z_Param_BrushSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrushRotation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutScreenPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutScreenSize);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutScreenRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WorldToCanvasBrush(Z_Param_BrushLocation,Z_Param_BrushSize,Z_Param_BrushRotation,Z_Param_Out_OutScreenPosition,Z_Param_Out_OutScreenSize,Z_Param_Out_OutScreenRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execWorldToCanvasUV)
	{
		P_GET_STRUCT(FVector2D,Z_Param_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->WorldToCanvasUV(Z_Param_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execWorldToCanvasSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_WorldSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->WorldToCanvasSize(Z_Param_WorldSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execWorldToCanvasRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->WorldToCanvasRotation(Z_Param_WorldRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execSetCanvasWorldLocation)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewLocation);
		P_GET_UBOOL(Z_Param_bPixelAligned);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PixelSizeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanvasWorldLocation(Z_Param_NewLocation,Z_Param_bPixelAligned,Z_Param_PixelSizeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execPostSimulate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostSimulate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execPreSimulate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreSimulate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldDrawingBoard::execUpdateDrawingBoardState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDrawingBoardState_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AWorldDrawingBoard_PostSimulate = FName(TEXT("PostSimulate"));
	void AWorldDrawingBoard::PostSimulate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWorldDrawingBoard_PostSimulate),NULL);
	}
	static FName NAME_AWorldDrawingBoard_PreSimulate = FName(TEXT("PreSimulate"));
	void AWorldDrawingBoard::PreSimulate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWorldDrawingBoard_PreSimulate),NULL);
	}
	static FName NAME_AWorldDrawingBoard_UpdateDrawingBoardState = FName(TEXT("UpdateDrawingBoardState"));
	void AWorldDrawingBoard::UpdateDrawingBoardState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWorldDrawingBoard_UpdateDrawingBoardState),NULL);
	}
	void AWorldDrawingBoard::StaticRegisterNativesAWorldDrawingBoard()
	{
		UClass* Class = AWorldDrawingBoard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveState", &AWorldDrawingBoard::execGetActiveState },
			{ "GetInteractHeight", &AWorldDrawingBoard::execGetInteractHeight },
			{ "GetInteractVolumes", &AWorldDrawingBoard::execGetInteractVolumes },
			{ "GetIsSimulating", &AWorldDrawingBoard::execGetIsSimulating },
			{ "GetRTDrawOn", &AWorldDrawingBoard::execGetRTDrawOn },
			{ "GetTimeFromLastDraw", &AWorldDrawingBoard::execGetTimeFromLastDraw },
			{ "GetUseInteractVolume", &AWorldDrawingBoard::execGetUseInteractVolume },
			{ "PostSimulate", &AWorldDrawingBoard::execPostSimulate },
			{ "PreSimulate", &AWorldDrawingBoard::execPreSimulate },
			{ "ResetInteractVolumes", &AWorldDrawingBoard::execResetInteractVolumes },
			{ "ResetUseInteractVolume", &AWorldDrawingBoard::execResetUseInteractVolume },
			{ "SetCanvasWorldLocation", &AWorldDrawingBoard::execSetCanvasWorldLocation },
			{ "SetDrawingBoardActive", &AWorldDrawingBoard::execSetDrawingBoardActive },
			{ "SetRTDrawOn", &AWorldDrawingBoard::execSetRTDrawOn },
			{ "UpdateDrawingBoardState", &AWorldDrawingBoard::execUpdateDrawingBoardState },
			{ "WorldToCanvasBrush", &AWorldDrawingBoard::execWorldToCanvasBrush },
			{ "WorldToCanvasRotation", &AWorldDrawingBoard::execWorldToCanvasRotation },
			{ "WorldToCanvasSize", &AWorldDrawingBoard::execWorldToCanvasSize },
			{ "WorldToCanvasUV", &AWorldDrawingBoard::execWorldToCanvasUV },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics
	{
		struct WorldDrawingBoard_eventGetActiveState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldDrawingBoard_eventGetActiveState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldDrawingBoard_eventGetActiveState_Parms), &Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board" },
		{ "Comment", "//If there are any InteractBrush in InteractVolume,we should stay active.But shut off when there are no InteractBrush after SleepTime\n//So,this will be later than GetShouldDrawOn,this will be false after SleepTime\n" },
		{ "DisplayName", "Get Active State" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "If there are any InteractBrush in InteractVolume,we should stay active.But shut off when there are no InteractBrush after SleepTime\nSo,this will be later than GetShouldDrawOn,this will be false after SleepTime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "GetActiveState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::WorldDrawingBoard_eventGetActiveState_Parms), Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics
	{
		struct WorldDrawingBoard_eventGetInteractHeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventGetInteractHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board" },
		{ "Comment", "//Get private properties//\n" },
		{ "DisplayName", "Get Interact Height" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Get private properties" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "GetInteractHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::WorldDrawingBoard_eventGetInteractHeight_Parms), Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics
	{
		struct WorldDrawingBoard_eventGetInteractVolumes_Parms
		{
			TArray<AWorldInteractVolume*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWorldInteractVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventGetInteractVolumes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | Interact Volume" },
		{ "DisplayName", "Get InteractVolumes" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "GetInteractVolumes", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::WorldDrawingBoard_eventGetInteractVolumes_Parms), Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics
	{
		struct WorldDrawingBoard_eventGetIsSimulating_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldDrawingBoard_eventGetIsSimulating_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldDrawingBoard_eventGetIsSimulating_Parms), &Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board" },
		{ "Comment", "//Although there may be some InteractBrushes,but there are no successful draw,then this DrawingBoard will sleep \n" },
		{ "DisplayName", "Get Is Simulating" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Although there may be some InteractBrushes,but there are no successful draw,then this DrawingBoard will sleep" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "GetIsSimulating", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::WorldDrawingBoard_eventGetIsSimulating_Parms), Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics
	{
		struct WorldDrawingBoard_eventGetRTDrawOn_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventGetRTDrawOn_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board" },
		{ "DisplayName", "Get RT Draw On" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "GetRTDrawOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::WorldDrawingBoard_eventGetRTDrawOn_Parms), Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics
	{
		struct WorldDrawingBoard_eventGetTimeFromLastDraw_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventGetTimeFromLastDraw_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board" },
		{ "DisplayName", "Get Time from Last Draw" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "GetTimeFromLastDraw", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::WorldDrawingBoard_eventGetTimeFromLastDraw_Parms), Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics
	{
		struct WorldDrawingBoard_eventGetUseInteractVolume_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldDrawingBoard_eventGetUseInteractVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldDrawingBoard_eventGetUseInteractVolume_Parms), &Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | Interact Volume" },
		{ "DisplayName", "Get Use InteractVolume" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "GetUseInteractVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::WorldDrawingBoard_eventGetUseInteractVolume_Parms), Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_PostSimulate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_PostSimulate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// After drawing brushes\n" },
		{ "DisplayName", "Post Simulate" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "After drawing brushes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_PostSimulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "PostSimulate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_PostSimulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_PostSimulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_PostSimulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_PostSimulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_PreSimulate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_PreSimulate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Before drawing brushes\n" },
		{ "DisplayName", "Pre Simulate" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Before drawing brushes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_PreSimulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "PreSimulate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_PreSimulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_PreSimulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_PreSimulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_PreSimulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics
	{
		struct WorldDrawingBoard_eventResetInteractVolumes_Parms
		{
			TArray<AWorldInteractVolume*> NewInteractVolumes;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInteractVolumes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewInteractVolumes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::NewProp_NewInteractVolumes_Inner = { "NewInteractVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWorldInteractVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::NewProp_NewInteractVolumes = { "NewInteractVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventResetInteractVolumes_Parms, NewInteractVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::NewProp_NewInteractVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::NewProp_NewInteractVolumes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | Interact Volume" },
		{ "DisplayName", "Reset InteractVolumes" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "ResetInteractVolumes", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::WorldDrawingBoard_eventResetInteractVolumes_Parms), Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics
	{
		struct WorldDrawingBoard_eventResetUseInteractVolume_Parms
		{
			bool NewUseInteractVolume;
		};
		static void NewProp_NewUseInteractVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUseInteractVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::NewProp_NewUseInteractVolume_SetBit(void* Obj)
	{
		((WorldDrawingBoard_eventResetUseInteractVolume_Parms*)Obj)->NewUseInteractVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::NewProp_NewUseInteractVolume = { "NewUseInteractVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldDrawingBoard_eventResetUseInteractVolume_Parms), &Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::NewProp_NewUseInteractVolume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::NewProp_NewUseInteractVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | Interact Volume" },
		{ "Comment", "//Interact Volume//\n" },
		{ "CPP_Default_NewUseInteractVolume", "false" },
		{ "DisplayName", "Reset Use InteractVolume" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Interact Volume" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "ResetUseInteractVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::WorldDrawingBoard_eventResetUseInteractVolume_Parms), Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics
	{
		struct WorldDrawingBoard_eventSetCanvasWorldLocation_Parms
		{
			FVector2D NewLocation;
			bool bPixelAligned;
			float PixelSizeScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static void NewProp_bPixelAligned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPixelAligned;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelSizeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventSetCanvasWorldLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::NewProp_bPixelAligned_SetBit(void* Obj)
	{
		((WorldDrawingBoard_eventSetCanvasWorldLocation_Parms*)Obj)->bPixelAligned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::NewProp_bPixelAligned = { "bPixelAligned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldDrawingBoard_eventSetCanvasWorldLocation_Parms), &Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::NewProp_bPixelAligned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::NewProp_PixelSizeScale = { "PixelSizeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventSetCanvasWorldLocation_Parms, PixelSizeScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::NewProp_bPixelAligned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::NewProp_PixelSizeScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | Runtime" },
		{ "Comment", "//Set CanvasWorldLocation\n//bPixelAligned : If this DrawingBoard should move with RenderTarget pixel aligned with last time\n//PixelSizeScale : When bPixelAligned is true,scale pixel size\n" },
		{ "CPP_Default_PixelSizeScale", "1.000000" },
		{ "DisplayName", "Set Canvas World Location" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Set CanvasWorldLocation\nbPixelAligned : If this DrawingBoard should move with RenderTarget pixel aligned with last time\nPixelSizeScale : When bPixelAligned is true,scale pixel size" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "SetCanvasWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::WorldDrawingBoard_eventSetCanvasWorldLocation_Parms), Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics
	{
		struct WorldDrawingBoard_eventSetDrawingBoardActive_Parms
		{
			bool Active;
		};
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((WorldDrawingBoard_eventSetDrawingBoardActive_Parms*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldDrawingBoard_eventSetDrawingBoardActive_Parms), &Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::NewProp_Active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::NewProp_Active,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board" },
		{ "Comment", "//Set active\n" },
		{ "CPP_Default_Active", "true" },
		{ "DisplayName", "Reset Active State" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Set active" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "SetDrawingBoardActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::WorldDrawingBoard_eventSetDrawingBoardActive_Parms), Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics
	{
		struct WorldDrawingBoard_eventSetRTDrawOn_Parms
		{
			UTextureRenderTarget2D* NewRT;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRT;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::NewProp_NewRT = { "NewRT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventSetRTDrawOn_Parms, NewRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::NewProp_NewRT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board" },
		{ "Comment", "//RT Draw On\n" },
		{ "DisplayName", "Set RT Draw On" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "RT Draw On" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "SetRTDrawOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::WorldDrawingBoard_eventSetRTDrawOn_Parms), Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_UpdateDrawingBoardState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_UpdateDrawingBoardState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Before we allocate brushes and simulate,we should update something,like position\n" },
		{ "DisplayName", "Update DrawingBoard State" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Before we allocate brushes and simulate,we should update something,like position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_UpdateDrawingBoardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "UpdateDrawingBoardState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_UpdateDrawingBoardState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_UpdateDrawingBoardState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_UpdateDrawingBoardState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_UpdateDrawingBoardState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics
	{
		struct WorldDrawingBoard_eventWorldToCanvasBrush_Parms
		{
			FVector2D BrushLocation;
			FVector2D BrushSize;
			float BrushRotation;
			FVector2D OutScreenPosition;
			FVector2D OutScreenSize;
			float OutScreenRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutScreenSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutScreenRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_BrushLocation = { "BrushLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasBrush_Parms, BrushLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasBrush_Parms, BrushSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_BrushRotation = { "BrushRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasBrush_Parms, BrushRotation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_OutScreenPosition = { "OutScreenPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasBrush_Parms, OutScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_OutScreenSize = { "OutScreenSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasBrush_Parms, OutScreenSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_OutScreenRotation = { "OutScreenRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasBrush_Parms, OutScreenRotation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_BrushLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_BrushSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_BrushRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_OutScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_OutScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::NewProp_OutScreenRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | World to Canvas" },
		{ "DisplayName", "World to Canvas Brush" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "WorldToCanvasBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::WorldDrawingBoard_eventWorldToCanvasBrush_Parms), Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics
	{
		struct WorldDrawingBoard_eventWorldToCanvasRotation_Parms
		{
			float WorldRotation;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::NewProp_WorldRotation = { "WorldRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasRotation_Parms, WorldRotation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasRotation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::NewProp_WorldRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | World to Canvas" },
		{ "Comment", "//Transform World to Canvas//\n" },
		{ "DisplayName", "World to Canvas Rotation" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Transform World to Canvas" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "WorldToCanvasRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::WorldDrawingBoard_eventWorldToCanvasRotation_Parms), Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics
	{
		struct WorldDrawingBoard_eventWorldToCanvasSize_Parms
		{
			FVector2D WorldSize;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasSize_Parms, WorldSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::NewProp_WorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | World to Canvas" },
		{ "DisplayName", "World to Canvas Size" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "WorldToCanvasSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::WorldDrawingBoard_eventWorldToCanvasSize_Parms), Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics
	{
		struct WorldDrawingBoard_eventWorldToCanvasUV_Parms
		{
			FVector2D WorldLocation;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasUV_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldDrawingBoard_eventWorldToCanvasUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Drawing Board | World to Canvas" },
		{ "DisplayName", "World to Canvas UV" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldDrawingBoard, nullptr, "WorldToCanvasUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::WorldDrawingBoard_eventWorldToCanvasUV_Parms), Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldDrawingBoard);
	UClass* Z_Construct_UClass_AWorldDrawingBoard_NoRegister()
	{
		return AWorldDrawingBoard::StaticClass();
	}
	struct Z_Construct_UClass_AWorldDrawingBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTBrushDrawOn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RTBrushDrawOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RTSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousRTSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousRTSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelWorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PixelWorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPixelWorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousPixelWorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanvasWorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasWorldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousCanvasWorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousCanvasWorldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanvasWorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasWorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousCanvasWorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousCanvasWorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanvasWorldYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CanvasWorldYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousCanvasWorldYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousCanvasWorldYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPixelAlignedMove_MetaData[];
#endif
		static void NewProp_bPixelAlignedMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPixelAlignedMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInteractVolume_MetaData[];
#endif
		static void NewProp_bUseInteractVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInteractVolume;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractVolumes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldDrawingBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveWorld,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorldDrawingBoard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldDrawingBoard_GetActiveState, "GetActiveState" }, // 517728132
		{ &Z_Construct_UFunction_AWorldDrawingBoard_GetInteractHeight, "GetInteractHeight" }, // 3048121717
		{ &Z_Construct_UFunction_AWorldDrawingBoard_GetInteractVolumes, "GetInteractVolumes" }, // 2426017873
		{ &Z_Construct_UFunction_AWorldDrawingBoard_GetIsSimulating, "GetIsSimulating" }, // 67008193
		{ &Z_Construct_UFunction_AWorldDrawingBoard_GetRTDrawOn, "GetRTDrawOn" }, // 1428190821
		{ &Z_Construct_UFunction_AWorldDrawingBoard_GetTimeFromLastDraw, "GetTimeFromLastDraw" }, // 373933212
		{ &Z_Construct_UFunction_AWorldDrawingBoard_GetUseInteractVolume, "GetUseInteractVolume" }, // 652091139
		{ &Z_Construct_UFunction_AWorldDrawingBoard_PostSimulate, "PostSimulate" }, // 3391993385
		{ &Z_Construct_UFunction_AWorldDrawingBoard_PreSimulate, "PreSimulate" }, // 262432151
		{ &Z_Construct_UFunction_AWorldDrawingBoard_ResetInteractVolumes, "ResetInteractVolumes" }, // 3164562117
		{ &Z_Construct_UFunction_AWorldDrawingBoard_ResetUseInteractVolume, "ResetUseInteractVolume" }, // 3647204611
		{ &Z_Construct_UFunction_AWorldDrawingBoard_SetCanvasWorldLocation, "SetCanvasWorldLocation" }, // 2453653473
		{ &Z_Construct_UFunction_AWorldDrawingBoard_SetDrawingBoardActive, "SetDrawingBoardActive" }, // 1307620937
		{ &Z_Construct_UFunction_AWorldDrawingBoard_SetRTDrawOn, "SetRTDrawOn" }, // 571648479
		{ &Z_Construct_UFunction_AWorldDrawingBoard_UpdateDrawingBoardState, "UpdateDrawingBoardState" }, // 3090438293
		{ &Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasBrush, "WorldToCanvasBrush" }, // 2446729461
		{ &Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasRotation, "WorldToCanvasRotation" }, // 3273284321
		{ &Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasSize, "WorldToCanvasSize" }, // 3569112686
		{ &Z_Construct_UFunction_AWorldDrawingBoard_WorldToCanvasUV, "WorldToCanvasUV" }, // 3854765776
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldDrawingBoard.h" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_ActiveVolumes_Inner = { "ActiveVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWorldInteractVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_ActiveVolumes_MetaData[] = {
		{ "Comment", "//InteractVolumes that make this DrawingBoard stay active\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "InteractVolumes that make this DrawingBoard stay active" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_ActiveVolumes = { "ActiveVolumes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, ActiveVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_ActiveVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_ActiveVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_SleepTime_MetaData[] = {
		{ "Category", "World Drawing Board | Sleep" },
		{ "Comment", "// If no brush draw on this board in this time,DrawingBoard will not simulate.\n// If 0,will only simulate when brush draw on.\n// If less than 0,It will not sleep.\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "If no brush draw on this board in this time,DrawingBoard will not simulate.\nIf 0,will only simulate when brush draw on.\nIf less than 0,It will not sleep." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_SleepTime = { "SleepTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, SleepTime), METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_SleepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_SleepTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTBrushDrawOn_MetaData[] = {
		{ "Comment", "//The RT that all brush will draw on this frame\n//Please Use \"Set RT Draw On\" to set it, and \"Get RT Draw On\"\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "The RT that all brush will draw on this frame\nPlease Use \"Set RT Draw On\" to set it, and \"Get RT Draw On\"" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTBrushDrawOn = { "RTBrushDrawOn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, RTBrushDrawOn), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTBrushDrawOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTBrushDrawOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTSize_MetaData[] = {
		{ "Category", "World Drawing Board | Simulating RT" },
		{ "Comment", "//RenderTarget size\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "RenderTarget size" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTSize = { "RTSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, RTSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousRTSize_MetaData[] = {
		{ "Category", "World Drawing Board | Simulating" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousRTSize = { "PreviousRTSize", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, PreviousRTSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousRTSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousRTSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PixelWorldSize_MetaData[] = {
		{ "Category", "World Drawing Board | Simulating RT" },
		{ "Comment", "//How big a RenderTarget pixel is in world\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "How big a RenderTarget pixel is in world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PixelWorldSize = { "PixelWorldSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, PixelWorldSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PixelWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PixelWorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousPixelWorldSize_MetaData[] = {
		{ "Category", "World Drawing Board | Simulating RT" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousPixelWorldSize = { "PreviousPixelWorldSize", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, PreviousPixelWorldSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousPixelWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousPixelWorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldLocation_MetaData[] = {
		{ "Category", "World Drawing Board | Canvas" },
		{ "Comment", "//The canvas location in world\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "The canvas location in world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldLocation = { "CanvasWorldLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, CanvasWorldLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldLocation_MetaData[] = {
		{ "Category", "World Drawing Board | Canvas" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldLocation = { "PreviousCanvasWorldLocation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, PreviousCanvasWorldLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldSize_MetaData[] = {
		{ "Category", "World Drawing Board | Canvas" },
		{ "Comment", "//The canvas size in world\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "The canvas size in world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldSize = { "CanvasWorldSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, CanvasWorldSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldSize_MetaData[] = {
		{ "Category", "World Drawing Board | Canvas" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldSize = { "PreviousCanvasWorldSize", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, PreviousCanvasWorldSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldYaw_MetaData[] = {
		{ "Category", "World Drawing Board | Canvas" },
		{ "Comment", "//The canvas yaw in world\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "The canvas yaw in world" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldYaw = { "CanvasWorldYaw", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, CanvasWorldYaw), METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldYaw_MetaData[] = {
		{ "Category", "World Drawing Board | Canvas" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldYaw = { "PreviousCanvasWorldYaw", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, PreviousCanvasWorldYaw), METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bPixelAlignedMove_MetaData[] = {
		{ "Category", "World Drawing Board | Simulating" },
		{ "Comment", "//If this DrawingBoard should move with RenderTarget pixel aligned with last time.\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "If this DrawingBoard should move with RenderTarget pixel aligned with last time." },
	};
#endif
	void Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bPixelAlignedMove_SetBit(void* Obj)
	{
		((AWorldDrawingBoard*)Obj)->bPixelAlignedMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bPixelAlignedMove = { "bPixelAlignedMove", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldDrawingBoard), &Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bPixelAlignedMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bPixelAlignedMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bPixelAlignedMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractHeight_MetaData[] = {
		{ "Category", "World Drawing Board | Simulating" },
		{ "Comment", "//This is for brush to calculate draw intensity,like snow,this can be the snow thickness\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "This is for brush to calculate draw intensity,like snow,this can be the snow thickness" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractHeight = { "InteractHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, InteractHeight), METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "World Drawing Board | Active Mode" },
		{ "Comment", "//Active this DrawingBoard\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "Active this DrawingBoard" },
	};
#endif
	void Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((AWorldDrawingBoard*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldDrawingBoard), &Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bUseInteractVolume_MetaData[] = {
		{ "Category", "World Drawing Board | Active Mode" },
		{ "Comment", "//If you want to use InteractVolume to define area thia this DrawingBoard active\n" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "If you want to use InteractVolume to define area thia this DrawingBoard active" },
	};
#endif
	void Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bUseInteractVolume_SetBit(void* Obj)
	{
		((AWorldDrawingBoard*)Obj)->bUseInteractVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bUseInteractVolume = { "bUseInteractVolume", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldDrawingBoard), &Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bUseInteractVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bUseInteractVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bUseInteractVolume_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractVolumes_Inner = { "InteractVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWorldInteractVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractVolumes_MetaData[] = {
		{ "Category", "World Drawing Board | Active Mode" },
		{ "Comment", "//If you want to use InteractVolume to define area thia this DrawingBoard active,this array stores InteractVolumes\n" },
		{ "editcondition", "bUseInteractVolume" },
		{ "ModuleRelativePath", "Public/WorldDrawingBoard.h" },
		{ "ToolTip", "If you want to use InteractVolume to define area thia this DrawingBoard active,this array stores InteractVolumes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractVolumes = { "InteractVolumes", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldDrawingBoard, InteractVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractVolumes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldDrawingBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_ActiveVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_ActiveVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_SleepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTBrushDrawOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_RTSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousRTSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PixelWorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousPixelWorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_CanvasWorldYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_PreviousCanvasWorldYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bPixelAlignedMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_bUseInteractVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldDrawingBoard_Statics::NewProp_InteractVolumes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldDrawingBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldDrawingBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldDrawingBoard_Statics::ClassParams = {
		&AWorldDrawingBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorldDrawingBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldDrawingBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldDrawingBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldDrawingBoard()
	{
		if (!Z_Registration_Info_UClass_AWorldDrawingBoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldDrawingBoard.OuterSingleton, Z_Construct_UClass_AWorldDrawingBoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldDrawingBoard.OuterSingleton;
	}
	template<> INTERACTIVEWORLD_API UClass* StaticClass<AWorldDrawingBoard>()
	{
		return AWorldDrawingBoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldDrawingBoard);
	AWorldDrawingBoard::~AWorldDrawingBoard() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldDrawingBoard, AWorldDrawingBoard::StaticClass, TEXT("AWorldDrawingBoard"), &Z_Registration_Info_UClass_AWorldDrawingBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldDrawingBoard), 506270030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_2653128782(TEXT("/Script/InteractiveWorld"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldDrawingBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
