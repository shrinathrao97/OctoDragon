// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OctoDragon/Character1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter1() {}
// Cross Module References
	OCTODRAGON_API UClass* Z_Construct_UClass_ACharacter1_NoRegister();
	OCTODRAGON_API UClass* Z_Construct_UClass_ACharacter1();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_OctoDragon();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void ACharacter1::StaticRegisterNativesACharacter1()
	{
	}
	UClass* Z_Construct_UClass_ACharacter1_NoRegister()
	{
		return ACharacter1::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canMove_MetaData[];
#endif
		static void NewProp_canMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipBook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlipBook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainFollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainFollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboResetTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboResetTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ComboCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFacingForward_MetaData[];
#endif
		static void NewProp_IsFacingForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFacingForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCurrMoving_MetaData[];
#endif
		static void NewProp_IsCurrMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCurrMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_OctoDragon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character1.h" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_canMove_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "//Variables\n" },
		{ "ModuleRelativePath", "Character1.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	void Z_Construct_UClass_ACharacter1_Statics::NewProp_canMove_SetBit(void* Obj)
	{
		((ACharacter1*)Obj)->canMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_canMove = { "canMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACharacter1), &Z_Construct_UClass_ACharacter1_Statics::NewProp_canMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_canMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_canMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_FlipBook_MetaData[] = {
		{ "Category", "Visuals" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_FlipBook = { "FlipBook", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter1, FlipBook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_FlipBook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_FlipBook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter1, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_MainFollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character1.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_MainFollowCamera = { "MainFollowCamera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter1, MainFollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_MainFollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_MainFollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboResetTimer_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboResetTimer = { "ComboResetTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter1, ComboResetTimer), METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboResetTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboResetTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboCounter_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboCounter = { "ComboCounter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter1, ComboCounter), METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_IsFacingForward_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
	void Z_Construct_UClass_ACharacter1_Statics::NewProp_IsFacingForward_SetBit(void* Obj)
	{
		((ACharacter1*)Obj)->IsFacingForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_IsFacingForward = { "IsFacingForward", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACharacter1), &Z_Construct_UClass_ACharacter1_Statics::NewProp_IsFacingForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_IsFacingForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_IsFacingForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_IsCurrMoving_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
	void Z_Construct_UClass_ACharacter1_Statics::NewProp_IsCurrMoving_SetBit(void* Obj)
	{
		((ACharacter1*)Obj)->IsCurrMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_IsCurrMoving = { "IsCurrMoving", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACharacter1), &Z_Construct_UClass_ACharacter1_Statics::NewProp_IsCurrMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_IsCurrMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_IsCurrMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter1, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_RunAnimation_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Character1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_RunAnimation = { "RunAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter1, RunAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_RunAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_RunAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter1_Statics::NewProp_WalkAnimation_MetaData[] = {
		{ "Category", "Visuals" },
		{ "Comment", "//Vars\n" },
		{ "ModuleRelativePath", "Character1.h" },
		{ "ToolTip", "Vars" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter1_Statics::NewProp_WalkAnimation = { "WalkAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter1, WalkAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::NewProp_WalkAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::NewProp_WalkAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacter1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_canMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_FlipBook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_MainFollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboResetTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_ComboCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_IsFacingForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_IsCurrMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_IdleAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_RunAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter1_Statics::NewProp_WalkAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacter1_Statics::ClassParams = {
		&ACharacter1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacter1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacter1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacter1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacter1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacter1, 1703686481);
	template<> OCTODRAGON_API UClass* StaticClass<ACharacter1>()
	{
		return ACharacter1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter1(Z_Construct_UClass_ACharacter1, &ACharacter1::StaticClass, TEXT("/Script/OctoDragon"), TEXT("ACharacter1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
