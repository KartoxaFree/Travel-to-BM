// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveWorld/Public/WorldInteractVolume.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldInteractVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldDrawingBoard_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldInteractVolume();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldInteractVolume_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_UInteractBrush_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveWorld();
// End Cross Module References
	DEFINE_FUNCTION(AWorldInteractVolume::execManualInteractBrushLeaveArea)
	{
		P_GET_OBJECT(UInteractBrush,Z_Param_InteractBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManualInteractBrushLeaveArea(Z_Param_InteractBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldInteractVolume::execManualInteractBrushEnterArea)
	{
		P_GET_OBJECT(UInteractBrush,Z_Param_InteractBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManualInteractBrushEnterArea(Z_Param_InteractBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldInteractVolume::execGetDrawingBoards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AWorldDrawingBoard*>*)Z_Param__Result=P_THIS->GetDrawingBoards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldInteractVolume::execOnActorLeavedArea)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorLeavedArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWorldInteractVolume::execOnActorEnteredArea)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorEnteredArea(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AWorldInteractVolume::StaticRegisterNativesAWorldInteractVolume()
	{
		UClass* Class = AWorldInteractVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDrawingBoards", &AWorldInteractVolume::execGetDrawingBoards },
			{ "ManualInteractBrushEnterArea", &AWorldInteractVolume::execManualInteractBrushEnterArea },
			{ "ManualInteractBrushLeaveArea", &AWorldInteractVolume::execManualInteractBrushLeaveArea },
			{ "OnActorEnteredArea", &AWorldInteractVolume::execOnActorEnteredArea },
			{ "OnActorLeavedArea", &AWorldInteractVolume::execOnActorLeavedArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics
	{
		struct WorldInteractVolume_eventGetDrawingBoards_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWorldDrawingBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventGetDrawingBoards_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Interact Volume" },
		{ "Comment", "//Get binding DrawingBoards\n" },
		{ "DisplayName", "Get DrawingBoards" },
		{ "Keywords", "DrawingBoards" },
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
		{ "ToolTip", "Get binding DrawingBoards" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldInteractVolume, nullptr, "GetDrawingBoards", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::WorldInteractVolume_eventGetDrawingBoards_Parms), Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics
	{
		struct WorldInteractVolume_eventManualInteractBrushEnterArea_Parms
		{
			UInteractBrush* InteractBrush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractBrush_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::NewProp_InteractBrush_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::NewProp_InteractBrush = { "InteractBrush", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventManualInteractBrushEnterArea_Parms, InteractBrush), Z_Construct_UClass_UInteractBrush_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::NewProp_InteractBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::NewProp_InteractBrush_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::NewProp_InteractBrush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Interact Volume" },
		{ "DisplayName", "Manual InteractBrush Enter Area" },
		{ "Keywords", "Interact,Brush" },
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldInteractVolume, nullptr, "ManualInteractBrushEnterArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::WorldInteractVolume_eventManualInteractBrushEnterArea_Parms), Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics
	{
		struct WorldInteractVolume_eventManualInteractBrushLeaveArea_Parms
		{
			UInteractBrush* InteractBrush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractBrush_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::NewProp_InteractBrush_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::NewProp_InteractBrush = { "InteractBrush", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventManualInteractBrushLeaveArea_Parms, InteractBrush), Z_Construct_UClass_UInteractBrush_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::NewProp_InteractBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::NewProp_InteractBrush_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::NewProp_InteractBrush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "World Interact Volume" },
		{ "DisplayName", "Manual InteractBrush Leave Area" },
		{ "Keywords", "Interact,Brush" },
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldInteractVolume, nullptr, "ManualInteractBrushLeaveArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::WorldInteractVolume_eventManualInteractBrushLeaveArea_Parms), Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics
	{
		struct WorldInteractVolume_eventOnActorEnteredArea_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorEnteredArea_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorEnteredArea_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorEnteredArea_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorEnteredArea_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((WorldInteractVolume_eventOnActorEnteredArea_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WorldInteractVolume_eventOnActorEnteredArea_Parms), &Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorEnteredArea_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldInteractVolume, nullptr, "OnActorEnteredArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::WorldInteractVolume_eventOnActorEnteredArea_Parms), Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics
	{
		struct WorldInteractVolume_eventOnActorLeavedArea_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorLeavedArea_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorLeavedArea_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorLeavedArea_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WorldInteractVolume_eventOnActorLeavedArea_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldInteractVolume, nullptr, "OnActorLeavedArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::WorldInteractVolume_eventOnActorLeavedArea_Parms), Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldInteractVolume);
	UClass* Z_Construct_UClass_AWorldInteractVolume_NoRegister()
	{
		return AWorldInteractVolume::StaticClass();
	}
	struct Z_Construct_UClass_AWorldInteractVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingBrushes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingBrushes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingBrushes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManualAddingBrushes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualAddingBrushes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ManualAddingBrushes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BindingDrawingBoards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingDrawingBoards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingDrawingBoards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldInteractVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveWorld,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorldInteractVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldInteractVolume_GetDrawingBoards, "GetDrawingBoards" }, // 4285471715
		{ &Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushEnterArea, "ManualInteractBrushEnterArea" }, // 1878987
		{ &Z_Construct_UFunction_AWorldInteractVolume_ManualInteractBrushLeaveArea, "ManualInteractBrushLeaveArea" }, // 2619199943
		{ &Z_Construct_UFunction_AWorldInteractVolume_OnActorEnteredArea, "OnActorEnteredArea" }, // 1735222855
		{ &Z_Construct_UFunction_AWorldInteractVolume_OnActorLeavedArea, "OnActorLeavedArea" }, // 3857692659
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldInteractVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "WorldInteractVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_OverlappingBrushes_Inner = { "OverlappingBrushes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractBrush_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_OverlappingBrushes_MetaData[] = {
		{ "Comment", "//Brushes in this volume\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
		{ "ToolTip", "Brushes in this volume" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_OverlappingBrushes = { "OverlappingBrushes", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldInteractVolume, OverlappingBrushes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_OverlappingBrushes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_OverlappingBrushes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_ManualAddingBrushes_Inner = { "ManualAddingBrushes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractBrush_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_ManualAddingBrushes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_ManualAddingBrushes = { "ManualAddingBrushes", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldInteractVolume, ManualAddingBrushes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_ManualAddingBrushes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_ManualAddingBrushes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_BindingDrawingBoards_Inner = { "BindingDrawingBoards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWorldDrawingBoard_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_BindingDrawingBoards_MetaData[] = {
		{ "Comment", "//Binding DrawingBoards\n" },
		{ "ModuleRelativePath", "Public/WorldInteractVolume.h" },
		{ "ToolTip", "Binding DrawingBoards" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_BindingDrawingBoards = { "BindingDrawingBoards", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldInteractVolume, BindingDrawingBoards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_BindingDrawingBoards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_BindingDrawingBoards_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldInteractVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_OverlappingBrushes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_OverlappingBrushes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_ManualAddingBrushes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_ManualAddingBrushes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_BindingDrawingBoards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldInteractVolume_Statics::NewProp_BindingDrawingBoards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldInteractVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldInteractVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldInteractVolume_Statics::ClassParams = {
		&AWorldInteractVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorldInteractVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldInteractVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldInteractVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldInteractVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldInteractVolume()
	{
		if (!Z_Registration_Info_UClass_AWorldInteractVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldInteractVolume.OuterSingleton, Z_Construct_UClass_AWorldInteractVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldInteractVolume.OuterSingleton;
	}
	template<> INTERACTIVEWORLD_API UClass* StaticClass<AWorldInteractVolume>()
	{
		return AWorldInteractVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldInteractVolume);
	AWorldInteractVolume::~AWorldInteractVolume() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldInteractVolume, AWorldInteractVolume::StaticClass, TEXT("AWorldInteractVolume"), &Z_Registration_Info_UClass_AWorldInteractVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldInteractVolume), 3196913647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_4078219789(TEXT("/Script/InteractiveWorld"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_WorldInteractVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
