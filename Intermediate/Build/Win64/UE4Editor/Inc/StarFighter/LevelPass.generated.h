// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_LevelPass_generated_h
#error "LevelPass.generated.h already included, missing '#pragma once' in LevelPass.h"
#endif
#define STARFIGHTER_LevelPass_generated_h

#define StarFighter_Source_StarFighter_LevelPass_h_11_SPARSE_DATA
#define StarFighter_Source_StarFighter_LevelPass_h_11_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_LevelPass_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_LevelPass_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelPass(); \
	friend struct Z_Construct_UClass_ALevelPass_Statics; \
public: \
	DECLARE_CLASS(ALevelPass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ALevelPass)


#define StarFighter_Source_StarFighter_LevelPass_h_11_INCLASS \
private: \
	static void StaticRegisterNativesALevelPass(); \
	friend struct Z_Construct_UClass_ALevelPass_Statics; \
public: \
	DECLARE_CLASS(ALevelPass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ALevelPass)


#define StarFighter_Source_StarFighter_LevelPass_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelPass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelPass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelPass(ALevelPass&&); \
	NO_API ALevelPass(const ALevelPass&); \
public:


#define StarFighter_Source_StarFighter_LevelPass_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelPass(ALevelPass&&); \
	NO_API ALevelPass(const ALevelPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelPass)


#define StarFighter_Source_StarFighter_LevelPass_h_11_PRIVATE_PROPERTY_OFFSET
#define StarFighter_Source_StarFighter_LevelPass_h_8_PROLOG
#define StarFighter_Source_StarFighter_LevelPass_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_LevelPass_h_11_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_LevelPass_h_11_SPARSE_DATA \
	StarFighter_Source_StarFighter_LevelPass_h_11_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_LevelPass_h_11_INCLASS \
	StarFighter_Source_StarFighter_LevelPass_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_LevelPass_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_LevelPass_h_11_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_LevelPass_h_11_SPARSE_DATA \
	StarFighter_Source_StarFighter_LevelPass_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_LevelPass_h_11_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_LevelPass_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class ALevelPass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_LevelPass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
