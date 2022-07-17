// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_C_Shield_generated_h
#error "C_Shield.generated.h already included, missing '#pragma once' in C_Shield.h"
#endif
#define STARFIGHTER_C_Shield_generated_h

#define StarFighter_Source_StarFighter_C_Shield_h_12_SPARSE_DATA
#define StarFighter_Source_StarFighter_C_Shield_h_12_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_C_Shield_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_C_Shield_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Shield(); \
	friend struct Z_Construct_UClass_AC_Shield_Statics; \
public: \
	DECLARE_CLASS(AC_Shield, AMyCapsule, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AC_Shield)


#define StarFighter_Source_StarFighter_C_Shield_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAC_Shield(); \
	friend struct Z_Construct_UClass_AC_Shield_Statics; \
public: \
	DECLARE_CLASS(AC_Shield, AMyCapsule, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AC_Shield)


#define StarFighter_Source_StarFighter_C_Shield_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_Shield(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_Shield) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Shield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Shield); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Shield(AC_Shield&&); \
	NO_API AC_Shield(const AC_Shield&); \
public:


#define StarFighter_Source_StarFighter_C_Shield_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Shield(AC_Shield&&); \
	NO_API AC_Shield(const AC_Shield&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Shield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Shield); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Shield)


#define StarFighter_Source_StarFighter_C_Shield_h_12_PRIVATE_PROPERTY_OFFSET
#define StarFighter_Source_StarFighter_C_Shield_h_9_PROLOG
#define StarFighter_Source_StarFighter_C_Shield_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_C_Shield_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_C_Shield_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_C_Shield_h_12_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_C_Shield_h_12_INCLASS \
	StarFighter_Source_StarFighter_C_Shield_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_C_Shield_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_C_Shield_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_C_Shield_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_C_Shield_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_C_Shield_h_12_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_C_Shield_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class AC_Shield>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_C_Shield_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
