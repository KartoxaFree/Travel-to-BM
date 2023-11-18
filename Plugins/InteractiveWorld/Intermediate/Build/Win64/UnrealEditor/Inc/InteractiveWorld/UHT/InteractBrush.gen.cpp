// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveWorld/Public/InteractBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractBrush() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldDrawingBoard_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldInteractVolume_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_UInteractBrush();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_UInteractBrush_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveWorld();
// End Cross Module References
	DEFINE_FUNCTION(UInteractBrush::execGetCurrentDrawSucceed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentDrawSucceed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractBrush::execGetLastDrawSucceed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastDrawSucceed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractBrush::execDrawOnRT)
	{
		P_GET_OBJECT(AWorldDrawingBoard,Z_Param_DrawingBoard);
		P_GET_OBJECT(UCanvas,Z_Param_CanvasDrawOn);
		P_GET_STRUCT(FVector2D,Z_Param_CanvasSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolateRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_DrawTimes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawOnRT_Implementation(Z_Param_DrawingBoard,Z_Param_CanvasDrawOn,Z_Param_CanvasSize,Z_Param_InterpolateRate,Z_Param_DrawTimes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractBrush::execUpdateDrawInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateDrawInfo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractBrush::execDrawBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawBrush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractBrush::execGetCullRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractBrush::execGetCurrentTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetCurrentTransform();
		P_NATIVE_END;
	}
	struct InteractBrush_eventDrawOnRT_Parms
	{
		AWorldDrawingBoard* DrawingBoard;
		UCanvas* CanvasDrawOn;
		FVector2D CanvasSize;
		float InterpolateRate;
		int32 DrawTimes;
	};
	struct InteractBrush_eventUpdateDrawInfo_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		InteractBrush_eventUpdateDrawInfo_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UInteractBrush_DrawOnRT = FName(TEXT("DrawOnRT"));
	void UInteractBrush::DrawOnRT(AWorldDrawingBoard* DrawingBoard, UCanvas* CanvasDrawOn, FVector2D CanvasSize, float InterpolateRate, int32 DrawTimes)
	{
		InteractBrush_eventDrawOnRT_Parms Parms;
		Parms.DrawingBoard=DrawingBoard;
		Parms.CanvasDrawOn=CanvasDrawOn;
		Parms.CanvasSize=CanvasSize;
		Parms.InterpolateRate=InterpolateRate;
		Parms.DrawTimes=DrawTimes;
		ProcessEvent(FindFunctionChecked(NAME_UInteractBrush_DrawOnRT),&Parms);
	}
	static FName NAME_UInteractBrush_UpdateDrawInfo = FName(TEXT("UpdateDrawInfo"));
	bool UInteractBrush::UpdateDrawInfo()
	{
		InteractBrush_eventUpdateDrawInfo_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UInteractBrush_UpdateDrawInfo),&Parms);
		return !!Parms.ReturnValue;
	}
	void UInteractBrush::StaticRegisterNativesUInteractBrush()
	{
		UClass* Class = UInteractBrush::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawBrush", &UInteractBrush::execDrawBrush },
			{ "DrawOnRT", &UInteractBrush::execDrawOnRT },
			{ "GetCullRadius", &UInteractBrush::execGetCullRadius },
			{ "GetCurrentDrawSucceed", &UInteractBrush::execGetCurrentDrawSucceed },
			{ "GetCurrentTransform", &UInteractBrush::execGetCurrentTransform },
			{ "GetLastDrawSucceed", &UInteractBrush::execGetLastDrawSucceed },
			{ "UpdateDrawInfo", &UInteractBrush::execUpdateDrawInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractBrush_DrawBrush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractBrush_DrawBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractBrush|Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Draw manually.If you set bDrawEveryFrame and bDrawOnMovement false,you should call this to draw\n" },
#endif
		{ "DisplayName", "Draw Brush" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw manually.If you set bDrawEveryFrame and bDrawOnMovement false,you should call this to draw" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractBrush_DrawBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractBrush, nullptr, "DrawBrush", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_DrawBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractBrush_DrawBrush_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInteractBrush_DrawBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractBrush_DrawBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingBoard;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasDrawOn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolateRate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DrawTimes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_DrawingBoard = { "DrawingBoard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractBrush_eventDrawOnRT_Parms, DrawingBoard), Z_Construct_UClass_AWorldDrawingBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_CanvasDrawOn = { "CanvasDrawOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractBrush_eventDrawOnRT_Parms, CanvasDrawOn), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_CanvasSize = { "CanvasSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractBrush_eventDrawOnRT_Parms, CanvasSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_InterpolateRate = { "InterpolateRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractBrush_eventDrawOnRT_Parms, InterpolateRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_DrawTimes = { "DrawTimes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractBrush_eventDrawOnRT_Parms, DrawTimes), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_DrawingBoard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_CanvasDrawOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_CanvasSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_InterpolateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::NewProp_DrawTimes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractBrush|Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The actual event to draw brush.if you opened bUseMultiDraw,InterpolateRate will interpolation from 0 to 1 \n" },
#endif
		{ "DisplayName", "Draw on RT" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actual event to draw brush.if you opened bUseMultiDraw,InterpolateRate will interpolation from 0 to 1" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractBrush, nullptr, "DrawOnRT", nullptr, nullptr, Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::PropPointers), sizeof(InteractBrush_eventDrawOnRT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::PropPointers) < 2048);
	static_assert(sizeof(InteractBrush_eventDrawOnRT_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractBrush_DrawOnRT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractBrush_DrawOnRT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics
	{
		struct InteractBrush_eventGetCullRadius_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractBrush_eventGetCullRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractBrush|Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get CullRadius of this brush\n" },
#endif
		{ "DisplayName", "Get Cull Radius" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get CullRadius of this brush" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractBrush, nullptr, "GetCullRadius", nullptr, nullptr, Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::InteractBrush_eventGetCullRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::InteractBrush_eventGetCullRadius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractBrush_GetCullRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractBrush_GetCullRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics
	{
		struct InteractBrush_eventGetCurrentDrawSucceed_Parms
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
	void Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractBrush_eventGetCurrentDrawSucceed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractBrush_eventGetCurrentDrawSucceed_Parms), &Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractBrush|Drawing" },
		{ "DisplayName", "Get Current Draw Succeed" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractBrush, nullptr, "GetCurrentDrawSucceed", nullptr, nullptr, Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::InteractBrush_eventGetCurrentDrawSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::InteractBrush_eventGetCurrentDrawSucceed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics
	{
		struct InteractBrush_eventGetCurrentTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractBrush_eventGetCurrentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractBrush|Trasnform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Current transform of this brush\n" },
#endif
		{ "DisplayName", "Get Current Transform" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current transform of this brush" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractBrush, nullptr, "GetCurrentTransform", nullptr, nullptr, Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::InteractBrush_eventGetCurrentTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::InteractBrush_eventGetCurrentTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractBrush_GetCurrentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractBrush_GetCurrentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics
	{
		struct InteractBrush_eventGetLastDrawSucceed_Parms
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
	void Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractBrush_eventGetLastDrawSucceed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractBrush_eventGetLastDrawSucceed_Parms), &Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractBrush|Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If we \"PrepareForDrawing\",but didn't draw successfully,it will be false.\n" },
#endif
		{ "DisplayName", "Get Last Draw Succeed" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we \"PrepareForDrawing\",but didn't draw successfully,it will be false." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractBrush, nullptr, "GetLastDrawSucceed", nullptr, nullptr, Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::InteractBrush_eventGetLastDrawSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::InteractBrush_eventGetLastDrawSucceed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractBrush_eventUpdateDrawInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractBrush_eventUpdateDrawInfo_Parms), &Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractBrush|Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function for blueprint children to override,update information and return a boolean which decides whether ot need to be drawn or not\n" },
#endif
		{ "DisplayName", "Update Draw Info" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function for blueprint children to override,update information and return a boolean which decides whether ot need to be drawn or not" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractBrush, nullptr, "UpdateDrawInfo", nullptr, nullptr, Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::PropPointers), sizeof(InteractBrush_eventUpdateDrawInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(InteractBrush_eventUpdateDrawInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractBrush);
	UClass* Z_Construct_UClass_UInteractBrush_NoRegister()
	{
		return UInteractBrush::StaticClass();
	}
	struct Z_Construct_UClass_UInteractBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullRadius_MetaData[];
#endif
		static void NewProp_bOverrideCullRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullRadiusOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CullRadiusOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawEveryFrame_MetaData[];
#endif
		static void NewProp_bDrawEveryFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawEveryFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOnMovement_MetaData[];
#endif
		static void NewProp_bDrawOnMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDrawOnlyDrawingBoardsClassList_MetaData[];
#endif
		static void NewProp_bUseDrawOnlyDrawingBoardsClassList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDrawOnlyDrawingBoardsClassList;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DrawOnlyDrawingBoardsClassList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawOnlyDrawingBoardsClassList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DrawOnlyDrawingBoardsClassList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultiDraw_MetaData[];
#endif
		static void NewProp_bUseMultiDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultiDraw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentT_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousT_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousDrawnT_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousDrawnT;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingInteractVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingInteractVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingInteractVolumes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractBrush_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractBrush_DrawBrush, "DrawBrush" }, // 178312457
		{ &Z_Construct_UFunction_UInteractBrush_DrawOnRT, "DrawOnRT" }, // 4049392837
		{ &Z_Construct_UFunction_UInteractBrush_GetCullRadius, "GetCullRadius" }, // 4066637972
		{ &Z_Construct_UFunction_UInteractBrush_GetCurrentDrawSucceed, "GetCurrentDrawSucceed" }, // 1217342857
		{ &Z_Construct_UFunction_UInteractBrush_GetCurrentTransform, "GetCurrentTransform" }, // 63375819
		{ &Z_Construct_UFunction_UInteractBrush_GetLastDrawSucceed, "GetLastDrawSucceed" }, // 350498961
		{ &Z_Construct_UFunction_UInteractBrush_UpdateDrawInfo, "UpdateDrawInfo" }, // 3037329064
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "InteractBrush.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "InteractBrush|Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//World size that the brush will draw in\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World size that the brush will draw in" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_Size_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_bOverrideCullRadius_MetaData[] = {
		{ "Category", "InteractBrush|Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If this brush is outside the DrawingBoard range,it will be culled,CullRadius will be calculated be size.Enable if you want to override that value.\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this brush is outside the DrawingBoard range,it will be culled,CullRadius will be calculated be size.Enable if you want to override that value." },
#endif
	};
#endif
	void Z_Construct_UClass_UInteractBrush_Statics::NewProp_bOverrideCullRadius_SetBit(void* Obj)
	{
		((UInteractBrush*)Obj)->bOverrideCullRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_bOverrideCullRadius = { "bOverrideCullRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractBrush), &Z_Construct_UClass_UInteractBrush_Statics::NewProp_bOverrideCullRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_bOverrideCullRadius_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_bOverrideCullRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_CullRadiusOverride_MetaData[] = {
		{ "Category", "InteractBrush|Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If this brush is outside the DrawingBoard range,it will be culled.This will override that value if bOverrideCullRadius = true\n" },
#endif
		{ "editcondition", "bOverrideCullRadius" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this brush is outside the DrawingBoard range,it will be culled.This will override that value if bOverrideCullRadius = true" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_CullRadiusOverride = { "CullRadiusOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, CullRadiusOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_CullRadiusOverride_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_CullRadiusOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawEveryFrame_MetaData[] = {
		{ "Category", "InteractBrush|DrawingMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Whether to draw every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to draw every frame" },
#endif
	};
#endif
	void Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawEveryFrame_SetBit(void* Obj)
	{
		((UInteractBrush*)Obj)->bDrawEveryFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawEveryFrame = { "bDrawEveryFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractBrush), &Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawEveryFrame_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawEveryFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawOnMovement_MetaData[] = {
		{ "Category", "InteractBrush|DrawingMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Whether to draw on movement.  Disable if you are going to draw manually from blueprint.\n" },
#endif
		{ "editcondition", "!bDrawEveryFrame" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to draw on movement.  Disable if you are going to draw manually from blueprint." },
#endif
	};
#endif
	void Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawOnMovement_SetBit(void* Obj)
	{
		((UInteractBrush*)Obj)->bDrawOnMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawOnMovement = { "bDrawOnMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractBrush), &Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawOnMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawOnMovement_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawOnMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_MovementTolerance_MetaData[] = {
		{ "Category", "InteractBrush|DrawingMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tolerance of movement.X:Position tolerance,Y:Rotation tolerance,Z:Scale tolerance.If greater than that will be considered as movement.\n" },
#endif
		{ "editcondition", "!bDrawEveryFrame" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tolerance of movement.X:Position tolerance,Y:Rotation tolerance,Z:Scale tolerance.If greater than that will be considered as movement." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_MovementTolerance = { "MovementTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, MovementTolerance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_MovementTolerance_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_MovementTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseDrawOnlyDrawingBoardsClassList_MetaData[] = {
		{ "Category", "InteractBrush|DrawingBoardType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enable if you'd like this brush can only draw in specific DrawingBoards.\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable if you'd like this brush can only draw in specific DrawingBoards." },
#endif
	};
#endif
	void Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseDrawOnlyDrawingBoardsClassList_SetBit(void* Obj)
	{
		((UInteractBrush*)Obj)->bUseDrawOnlyDrawingBoardsClassList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseDrawOnlyDrawingBoardsClassList = { "bUseDrawOnlyDrawingBoardsClassList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractBrush), &Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseDrawOnlyDrawingBoardsClassList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseDrawOnlyDrawingBoardsClassList_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseDrawOnlyDrawingBoardsClassList_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_DrawOnlyDrawingBoardsClassList_Inner = { "DrawOnlyDrawingBoardsClassList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AWorldDrawingBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_DrawOnlyDrawingBoardsClassList_MetaData[] = {
		{ "Category", "InteractBrush|DrawingBoardType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//You'd like this brush can only draw in specific DrawingBoards class,bUseDrawOnlyDrawingBoardsClassList should be true if you want to use it.\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You'd like this brush can only draw in specific DrawingBoards class,bUseDrawOnlyDrawingBoardsClassList should be true if you want to use it." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_DrawOnlyDrawingBoardsClassList = { "DrawOnlyDrawingBoardsClassList", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, DrawOnlyDrawingBoardsClassList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_DrawOnlyDrawingBoardsClassList_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_DrawOnlyDrawingBoardsClassList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseMultiDraw_MetaData[] = {
		{ "Category", "InteractBrush|MultiDraw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If you want to draw more than once every frame.\n//If true,the drawing times will be depending on distance moved,but more than once each update.\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want to draw more than once every frame.\nIf true,the drawing times will be depending on distance moved,but more than once each update." },
#endif
	};
#endif
	void Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseMultiDraw_SetBit(void* Obj)
	{
		((UInteractBrush*)Obj)->bUseMultiDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseMultiDraw = { "bUseMultiDraw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractBrush), &Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseMultiDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseMultiDraw_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseMultiDraw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_MaxDrawDistance_MetaData[] = {
		{ "Category", "InteractBrush|MultiDraw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If bUseMultiDraw = true,drawing times will be depending on distance moved,then how far do you want each draw between\n" },
#endif
		{ "editcondition", "bUseMultiDraw" },
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If bUseMultiDraw = true,drawing times will be depending on distance moved,then how far do you want each draw between" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_MaxDrawDistance = { "MaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, MaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_MaxDrawDistance_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_MaxDrawDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_CurrentT_MetaData[] = {
		{ "Category", "InteractBrush|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Current Transform\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Transform" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_CurrentT = { "CurrentT", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, CurrentT), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_CurrentT_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_CurrentT_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousT_MetaData[] = {
		{ "Category", "InteractBrush|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Previous Transform,each time we call \"PrepareForDrawing\",CurrentT will be set,and PreviousT saves old CurrentT\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous Transform,each time we call \"PrepareForDrawing\",CurrentT will be set,and PreviousT saves old CurrentT" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousT = { "PreviousT", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, PreviousT), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousT_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousT_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousDrawnT_MetaData[] = {
		{ "Category", "InteractBrush|Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Only update when we draw on drawing board,this saves the transform last time it draw\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only update when we draw on drawing board,this saves the transform last time it draw" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousDrawnT = { "PreviousDrawnT", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, PreviousDrawnT), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousDrawnT_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousDrawnT_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_OverlappingInteractVolumes_Inner = { "OverlappingInteractVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWorldInteractVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractBrush_Statics::NewProp_OverlappingInteractVolumes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Currently OverlappingInteractVolumes\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractBrush.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently OverlappingInteractVolumes" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractBrush_Statics::NewProp_OverlappingInteractVolumes = { "OverlappingInteractVolumes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractBrush, OverlappingInteractVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::NewProp_OverlappingInteractVolumes_MetaData), Z_Construct_UClass_UInteractBrush_Statics::NewProp_OverlappingInteractVolumes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_bOverrideCullRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_CullRadiusOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawEveryFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_bDrawOnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_MovementTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseDrawOnlyDrawingBoardsClassList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_DrawOnlyDrawingBoardsClassList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_DrawOnlyDrawingBoardsClassList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_bUseMultiDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_MaxDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_CurrentT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_PreviousDrawnT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_OverlappingInteractVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractBrush_Statics::NewProp_OverlappingInteractVolumes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractBrush>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractBrush_Statics::ClassParams = {
		&UInteractBrush::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractBrush_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractBrush_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractBrush_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInteractBrush()
	{
		if (!Z_Registration_Info_UClass_UInteractBrush.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractBrush.OuterSingleton, Z_Construct_UClass_UInteractBrush_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractBrush.OuterSingleton;
	}
	template<> INTERACTIVEWORLD_API UClass* StaticClass<UInteractBrush>()
	{
		return UInteractBrush::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractBrush);
	UInteractBrush::~UInteractBrush() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractBrush, UInteractBrush::StaticClass, TEXT("UInteractBrush"), &Z_Registration_Info_UClass_UInteractBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractBrush), 2368459841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_49055493(TEXT("/Script/InteractiveWorld"),
		Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractBrush_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
