// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveWorld/Public/InteractiveWorldBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveWorldBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_AWorldInteractVolume_NoRegister();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_UInteractiveWorldBPLibrary();
	INTERACTIVEWORLD_API UClass* Z_Construct_UClass_UInteractiveWorldBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveWorld();
// End Cross Module References
	DEFINE_FUNCTION(UInteractiveWorldBPLibrary::execIW_AddWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInteractiveWorldBPLibrary::IW_AddWarning(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveWorldBPLibrary::execRefreshInteractVolume)
	{
		P_GET_OBJECT(AWorldInteractVolume,Z_Param_InteractVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInteractiveWorldBPLibrary::RefreshInteractVolume(Z_Param_InteractVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveWorldBPLibrary::execVector3ToVector2)
	{
		P_GET_STRUCT(FVector,Z_Param_inVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UInteractiveWorldBPLibrary::Vector3ToVector2(Z_Param_inVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveWorldBPLibrary::execResizeRenderTarget2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget2D);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInteractiveWorldBPLibrary::ResizeRenderTarget2D(Z_Param_RenderTarget2D,Z_Param_SizeX,Z_Param_SizeY);
		P_NATIVE_END;
	}
	void UInteractiveWorldBPLibrary::StaticRegisterNativesUInteractiveWorldBPLibrary()
	{
		UClass* Class = UInteractiveWorldBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IW_AddWarning", &UInteractiveWorldBPLibrary::execIW_AddWarning },
			{ "RefreshInteractVolume", &UInteractiveWorldBPLibrary::execRefreshInteractVolume },
			{ "ResizeRenderTarget2D", &UInteractiveWorldBPLibrary::execResizeRenderTarget2D },
			{ "Vector3ToVector2", &UInteractiveWorldBPLibrary::execVector3ToVector2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics
	{
		struct InteractiveWorldBPLibrary_eventIW_AddWarning_Parms
		{
			FString Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldBPLibrary_eventIW_AddWarning_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "ToolLibrary" },
		{ "DisplayName", "IW Add Warning" },
		{ "Keywords", "warning" },
		{ "ModuleRelativePath", "Public/InteractiveWorldBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldBPLibrary, nullptr, "IW_AddWarning", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::InteractiveWorldBPLibrary_eventIW_AddWarning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::InteractiveWorldBPLibrary_eventIW_AddWarning_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics
	{
		struct InteractiveWorldBPLibrary_eventRefreshInteractVolume_Parms
		{
			AWorldInteractVolume* InteractVolume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::NewProp_InteractVolume = { "InteractVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldBPLibrary_eventRefreshInteractVolume_Parms, InteractVolume), Z_Construct_UClass_AWorldInteractVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::NewProp_InteractVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "ToolLibrary" },
		{ "DisplayName", "Refresh Interact Volumes" },
		{ "Keywords", "vector" },
		{ "ModuleRelativePath", "Public/InteractiveWorldBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldBPLibrary, nullptr, "RefreshInteractVolume", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::InteractiveWorldBPLibrary_eventRefreshInteractVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::InteractiveWorldBPLibrary_eventRefreshInteractVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics
	{
		struct InteractiveWorldBPLibrary_eventResizeRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget2D;
			int32 SizeX;
			int32 SizeY;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget2D;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::NewProp_RenderTarget2D = { "RenderTarget2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldBPLibrary_eventResizeRenderTarget2D_Parms, RenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldBPLibrary_eventResizeRenderTarget2D_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldBPLibrary_eventResizeRenderTarget2D_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::NewProp_RenderTarget2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::NewProp_SizeY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "ToolLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Resize RenderTarget2D in blueprint\n//This will call RenderTarget2D->ResizeTarget(SizeX,SizeY)\n//Resizes the render target without recreating the FTextureResource.  Will not flush commands unless the render target resource doesnt exist\n" },
#endif
		{ "DisplayName", "Resize Rendertarget2D" },
		{ "Keywords", "InteractiveWorld" },
		{ "ModuleRelativePath", "Public/InteractiveWorldBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resize RenderTarget2D in blueprint\nThis will call RenderTarget2D->ResizeTarget(SizeX,SizeY)\nResizes the render target without recreating the FTextureResource.  Will not flush commands unless the render target resource doesnt exist" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldBPLibrary, nullptr, "ResizeRenderTarget2D", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::InteractiveWorldBPLibrary_eventResizeRenderTarget2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::InteractiveWorldBPLibrary_eventResizeRenderTarget2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics
	{
		struct InteractiveWorldBPLibrary_eventVector3ToVector2_Parms
		{
			FVector inVector;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::NewProp_inVector = { "inVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldBPLibrary_eventVector3ToVector2_Parms, inVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveWorldBPLibrary_eventVector3ToVector2_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::NewProp_inVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::Function_MetaDataParams[] = {
		{ "Category", "ToolLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Convert Vector3 to Vector2.Why there are not a FVector.XY?\n" },
#endif
		{ "DisplayName", "Vector3 to Vector2" },
		{ "Keywords", "vector" },
		{ "ModuleRelativePath", "Public/InteractiveWorldBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert Vector3 to Vector2.Why there are not a FVector.XY?" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveWorldBPLibrary, nullptr, "Vector3ToVector2", nullptr, nullptr, Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::InteractiveWorldBPLibrary_eventVector3ToVector2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::InteractiveWorldBPLibrary_eventVector3ToVector2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveWorldBPLibrary);
	UClass* Z_Construct_UClass_UInteractiveWorldBPLibrary_NoRegister()
	{
		return UInteractiveWorldBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveWorld,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveWorldBPLibrary_IW_AddWarning, "IW_AddWarning" }, // 2980846983
		{ &Z_Construct_UFunction_UInteractiveWorldBPLibrary_RefreshInteractVolume, "RefreshInteractVolume" }, // 1034219390
		{ &Z_Construct_UFunction_UInteractiveWorldBPLibrary_ResizeRenderTarget2D, "ResizeRenderTarget2D" }, // 2399149274
		{ &Z_Construct_UFunction_UInteractiveWorldBPLibrary_Vector3ToVector2, "Vector3ToVector2" }, // 1082383950
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractiveWorldBPLibrary.h" },
		{ "ModuleRelativePath", "Public/InteractiveWorldBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveWorldBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::ClassParams = {
		&UInteractiveWorldBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractiveWorldBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UInteractiveWorldBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveWorldBPLibrary.OuterSingleton, Z_Construct_UClass_UInteractiveWorldBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveWorldBPLibrary.OuterSingleton;
	}
	template<> INTERACTIVEWORLD_API UClass* StaticClass<UInteractiveWorldBPLibrary>()
	{
		return UInteractiveWorldBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveWorldBPLibrary);
	UInteractiveWorldBPLibrary::~UInteractiveWorldBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveWorldBPLibrary, UInteractiveWorldBPLibrary::StaticClass, TEXT("UInteractiveWorldBPLibrary"), &Z_Registration_Info_UClass_UInteractiveWorldBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveWorldBPLibrary), 2539781744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_1019806080(TEXT("/Script/InteractiveWorld"),
		Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Travel_to_BM_5_3_Plugins_InteractiveWorld_Source_InteractiveWorld_Public_InteractiveWorldBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
