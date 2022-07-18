// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_PaS_ChangeWeapon_generated_h
#error "PaS_ChangeWeapon.generated.h already included, missing '#pragma once' in PaS_ChangeWeapon.h"
#endif
#define STARFIGHTER_PaS_ChangeWeapon_generated_h

#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_SPARSE_DATA
#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API UPaS_ChangeWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaS_ChangeWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, UPaS_ChangeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaS_ChangeWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API UPaS_ChangeWeapon(UPaS_ChangeWeapon&&); \
	STARFIGHTER_API UPaS_ChangeWeapon(const UPaS_ChangeWeapon&); \
public:


#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API UPaS_ChangeWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API UPaS_ChangeWeapon(UPaS_ChangeWeapon&&); \
	STARFIGHTER_API UPaS_ChangeWeapon(const UPaS_ChangeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, UPaS_ChangeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaS_ChangeWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaS_ChangeWeapon)


#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPaS_ChangeWeapon(); \
	friend struct Z_Construct_UClass_UPaS_ChangeWeapon_Statics; \
public: \
	DECLARE_CLASS(UPaS_ChangeWeapon, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StarFighter"), STARFIGHTER_API) \
	DECLARE_SERIALIZER(UPaS_ChangeWeapon)


#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPaS_ChangeWeapon() {} \
public: \
	typedef UPaS_ChangeWeapon UClassType; \
	typedef IPaS_ChangeWeapon ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IPaS_ChangeWeapon() {} \
public: \
	typedef UPaS_ChangeWeapon UClassType; \
	typedef IPaS_ChangeWeapon ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_9_PROLOG
#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_PaS_ChangeWeapon_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class UPaS_ChangeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_PaS_ChangeWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
