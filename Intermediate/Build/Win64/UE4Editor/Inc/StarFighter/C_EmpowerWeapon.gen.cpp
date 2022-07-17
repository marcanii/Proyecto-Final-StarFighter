// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/C_EmpowerWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_EmpowerWeapon() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_EmpowerWeapon_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_EmpowerWeapon();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AC_EmpowerWeapon::StaticRegisterNativesAC_EmpowerWeapon()
	{
	}
	UClass* Z_Construct_UClass_AC_EmpowerWeapon_NoRegister()
	{
		return AC_EmpowerWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AC_EmpowerWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_EmpowerWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_EmpowerWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_EmpowerWeapon.h" },
		{ "ModuleRelativePath", "C_EmpowerWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_EmpowerWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_EmpowerWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_EmpowerWeapon_Statics::ClassParams = {
		&AC_EmpowerWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_EmpowerWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_EmpowerWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_EmpowerWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_EmpowerWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_EmpowerWeapon, 1219199791);
	template<> STARFIGHTER_API UClass* StaticClass<AC_EmpowerWeapon>()
	{
		return AC_EmpowerWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_EmpowerWeapon(Z_Construct_UClass_AC_EmpowerWeapon, &AC_EmpowerWeapon::StaticClass, TEXT("/Script/StarFighter"), TEXT("AC_EmpowerWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_EmpowerWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
