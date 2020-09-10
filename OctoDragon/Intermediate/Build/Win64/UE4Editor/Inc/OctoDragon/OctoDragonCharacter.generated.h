// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCTODRAGON_OctoDragonCharacter_generated_h
#error "OctoDragonCharacter.generated.h already included, missing '#pragma once' in OctoDragonCharacter.h"
#endif
#define OCTODRAGON_OctoDragonCharacter_generated_h

#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_SPARSE_DATA
#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_RPC_WRAPPERS
#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOctoDragonCharacter(); \
	friend struct Z_Construct_UClass_AOctoDragonCharacter_Statics; \
public: \
	DECLARE_CLASS(AOctoDragonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OctoDragon"), NO_API) \
	DECLARE_SERIALIZER(AOctoDragonCharacter)


#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOctoDragonCharacter(); \
	friend struct Z_Construct_UClass_AOctoDragonCharacter_Statics; \
public: \
	DECLARE_CLASS(AOctoDragonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OctoDragon"), NO_API) \
	DECLARE_SERIALIZER(AOctoDragonCharacter)


#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOctoDragonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOctoDragonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOctoDragonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOctoDragonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOctoDragonCharacter(AOctoDragonCharacter&&); \
	NO_API AOctoDragonCharacter(const AOctoDragonCharacter&); \
public:


#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOctoDragonCharacter(AOctoDragonCharacter&&); \
	NO_API AOctoDragonCharacter(const AOctoDragonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOctoDragonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOctoDragonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOctoDragonCharacter)


#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AOctoDragonCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AOctoDragonCharacter, CameraBoom); }


#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_9_PROLOG
#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_SPARSE_DATA \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_RPC_WRAPPERS \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_INCLASS \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_SPARSE_DATA \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_INCLASS_NO_PURE_DECLS \
	OctoDragon_Source_OctoDragon_OctoDragonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCTODRAGON_API UClass* StaticClass<class AOctoDragonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OctoDragon_Source_OctoDragon_OctoDragonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
