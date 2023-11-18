// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveWorld/Public/InteractiveWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveWorldSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldDrawingBoard_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_UInteractBrush_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_UInteractiveWorldSubsystem();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_UInteractiveWorldSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveWorld();
// End Cross Module References
	DEFINE_FUNCTION(UInteractiveWorldSubsystem::execGetRegisteredInteractBrushes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UInteractBrush*>*)Z_Param__Result=P_THIS->GetRegisteredInteractBrushes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveWorldSubsystem::execGetRegisteredDrawingBoards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AWorldDrawingBoard*>*)Z_Param__Result=P_THIS->GetRegisteredDrawingBoards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveWorldSubsystem::execUnregisterDrawingBoard)
	{
		P_GET_OBJECT(AWorldDrawingBoard,Z_Param_DrawingBoard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterDrawingBoard(Z_Param_DrawingBoard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveWorldSubsystem::execRegisterDrawingBoard)
	{
		P_GET_OBJECT(AWorldDrawingBoard,Z_Param_DrawingBoard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterDrawingBoard(Z_Param_DrawingBoard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveWorldSubsystem::execUnregisterBrush)
	{
		P_GET_OBJECT(UInteractBrush,Z_Param_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterBrush(Z_Param_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveWorldSubsystem::execRegisterBrush)
	{
		P_GET_OBJECT(UInteractBrush,Z_Param_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterBrush(Z_Param_Brush);
		P_NATIVE_END;
	}
	void UInteractiveWorldSubsystem::StaticRegisterNativesUInteractiveWorldSubsystem()
	{
		UClass* Class = UInteractiveWorldSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRegisteredDrawingBoards", &UInteractiveWorldSubsystem::execGetRegisteredDrawingBoards },
			{ "GetRegisteredInteractBrushes", &UInteractiveWorldSubsystem::execGetRegisteredInteractBrushes },
			{ "RegisterBrush", &UInteractiveWorldSubsystem::execRegisterBrush },
			{ "RegisterDrawingBoard", &UInteractiveWorldSubsystem::execRegisterDrawingBoard },
			{ "UnregisterBrush", &UInteractiveWorldSubsystem::execUnregisterBrush },
			{ "UnregisterDrawingBoard", &UInteractiveWorldSubsystem::execUnregisterDrawingBoard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics
	{
		struct InteractiveWorldSubsystem_eventGetRegisteredDrawingBoards_Parms
		{
			TArray<AWorldDrawingBoard*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWorldDrawingBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldSubsystem_eventGetRegisteredDrawingBoards_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactive World Subsystem | Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//For Debugging\n" },
#endif
		{ "DisplayName", "Get Registered Drawing Boards" },
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For Debugging" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldSubsystem, nullptr, "GetRegisteredDrawingBoards", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::InteractiveWorldSubsystem_eventGetRegisteredDrawingBoards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::InteractiveWorldSubsystem_eventGetRegisteredDrawingBoards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics
	{
		struct InteractiveWorldSubsystem_eventGetRegisteredInteractBrushes_Parms
		{
			TArray<UInteractBrush*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInteractBrush_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldSubsystem_eventGetRegisteredInteractBrushes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactive World Subsystem | Debug" },
		{ "DisplayName", "Get Registered Interact Brushes" },
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldSubsystem, nullptr, "GetRegisteredInteractBrushes", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::InteractiveWorldSubsystem_eventGetRegisteredInteractBrushes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::InteractiveWorldSubsystem_eventGetRegisteredInteractBrushes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics
	{
		struct InteractiveWorldSubsystem_eventRegisterBrush_Parms
		{
			UInteractBrush* Brush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldSubsystem_eventRegisterBrush_Parms, Brush), Z_Construct_UClass_UInteractBrush_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::NewProp_Brush_MetaData), Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::NewProp_Brush_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactive World Subsystem | Register" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register a InteractBrush to subsystem,then the brush can be allocated to WorldDrawingBoards and draw trails\n" },
#endif
		{ "DisplayName", "Register Brush" },
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a InteractBrush to subsystem,then the brush can be allocated to WorldDrawingBoards and draw trails" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldSubsystem, nullptr, "RegisterBrush", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::InteractiveWorldSubsystem_eventRegisterBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::InteractiveWorldSubsystem_eventRegisterBrush_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics
	{
		struct InteractiveWorldSubsystem_eventRegisterDrawingBoard_Parms
		{
			AWorldDrawingBoard* DrawingBoard;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingBoard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::NewProp_DrawingBoard = { "DrawingBoard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldSubsystem_eventRegisterDrawingBoard_Parms, DrawingBoard), Z_Construct_UClass_AWorldDrawingBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::NewProp_DrawingBoard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactive World Subsystem | Register" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register a DrawingBoard to subsystem,then the brush can be allocated to it and draw trails\n" },
#endif
		{ "DisplayName", "Register Drawing Board" },
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a DrawingBoard to subsystem,then the brush can be allocated to it and draw trails" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldSubsystem, nullptr, "RegisterDrawingBoard", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::InteractiveWorldSubsystem_eventRegisterDrawingBoard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::InteractiveWorldSubsystem_eventRegisterDrawingBoard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics
	{
		struct InteractiveWorldSubsystem_eventUnregisterBrush_Parms
		{
			UInteractBrush* Brush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldSubsystem_eventUnregisterBrush_Parms, Brush), Z_Construct_UClass_UInteractBrush_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::NewProp_Brush_MetaData), Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::NewProp_Brush_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactive World Subsystem | Register" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister a InteractBrush\n" },
#endif
		{ "DisplayName", "Unregister Brush" },
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister a InteractBrush" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldSubsystem, nullptr, "UnregisterBrush", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::InteractiveWorldSubsystem_eventUnregisterBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::InteractiveWorldSubsystem_eventUnregisterBrush_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics
	{
		struct InteractiveWorldSubsystem_eventUnregisterDrawingBoard_Parms
		{
			AWorldDrawingBoard* DrawingBoard;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingBoard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::NewProp_DrawingBoard = { "DrawingBoard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldSubsystem_eventUnregisterDrawingBoard_Parms, DrawingBoard), Z_Construct_UClass_AWorldDrawingBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::NewProp_DrawingBoard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactive World Subsystem | Register" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Unregister a DrawingBoard\n" },
#endif
		{ "DisplayName", "Unregister Drawing Board" },
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregister a DrawingBoard" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldSubsystem, nullptr, "UnregisterDrawingBoard", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::InteractiveWorldSubsystem_eventUnregisterDrawingBoard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::InteractiveWorldSubsystem_eventUnregisterDrawingBoard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveWorldSubsystem);
	UClass* Z_Construct_UClass_UInteractiveWorldSubsystem_NoRegister()
	{
		return UInteractiveWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushCullDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Brushes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brushes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Brushes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingBoards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawingBoards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DrawingBoards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredDrawingBoards, "GetRegisteredDrawingBoards" }, // 912411408
		{ &Z_Construct_UFunction_UInteractiveWorldSubsystem_GetRegisteredInteractBrushes, "GetRegisteredInteractBrushes" }, // 3209612957
		{ &Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterBrush, "RegisterBrush" }, // 709196910
		{ &Z_Construct_UFunction_UInteractiveWorldSubsystem_RegisterDrawingBoard, "RegisterDrawingBoard" }, // 1089722075
		{ &Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterBrush, "UnregisterBrush" }, // 4225063383
		{ &Z_Construct_UFunction_UInteractiveWorldSubsystem_UnregisterDrawingBoard, "UnregisterDrawingBoard" }, // 3007145108
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractiveWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_BrushCullDistance_MetaData[] = {
		{ "Category", "Interactive World Subsystem | Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Distance from player camera,brushes out of range will not be drawn.If less than 0,will not cull brushes.\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from player camera,brushes out of range will not be drawn.If less than 0,will not cull brushes." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_BrushCullDistance = { "BrushCullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveWorldSubsystem, BrushCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_BrushCullDistance_MetaData), Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_BrushCullDistance_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_Brushes_Inner = { "Brushes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInteractBrush_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_Brushes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Brushes that registered\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brushes that registered" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_Brushes = { "Brushes", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveWorldSubsystem, Brushes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_Brushes_MetaData), Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_Brushes_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_DrawingBoards_Inner = { "DrawingBoards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AWorldDrawingBoard_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_DrawingBoards_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DrawingBoards that registered\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractiveWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DrawingBoards that registered" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_DrawingBoards = { "DrawingBoards", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractiveWorldSubsystem, DrawingBoards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_DrawingBoards_MetaData), Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_DrawingBoards_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_BrushCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_Brushes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_Brushes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_DrawingBoards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::NewProp_DrawingBoards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::ClassParams = {
		&UInteractiveWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInteractiveWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UInteractiveWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveWorldSubsystem.OuterSingleton, Z_Construct_UClass_UInteractiveWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveWorldSubsystem.OuterSingleton;
	}
	template<> INTERACTIVEWORLD_API UClass* StaticClass<UInteractiveWorldSubsystem>()
	{
		return UInteractiveWorldSubsystem::StaticClass();
	}
	UInteractiveWorldSubsystem::UInteractiveWorldSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveWorldSubsystem);
	UInteractiveWorldSubsystem::~UInteractiveWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveWorldSubsystem, UInteractiveWorldSubsystem::StaticClass, TEXT("UInteractiveWorldSubsystem"), &Z_Registration_Info_UClass_UInteractiveWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveWorldSubsystem), 2766539861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_3432378925(TEXT("/Script/InteractiveWorld"),
		Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
