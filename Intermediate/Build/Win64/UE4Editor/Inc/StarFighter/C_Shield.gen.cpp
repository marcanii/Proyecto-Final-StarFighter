// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/C_Shield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Shield() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_Shield_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_Shield();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AC_Shield::StaticRegisterNativesAC_Shield()
	{
	}
	UClass* Z_Construct_UClass_AC_Shield_NoRegister()
	{
		return AC_Shield::StaticClass();
	}
	struct Z_Construct_UClass_AC_Shield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Shield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Shield_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_Shield.h" },
		{ "ModuleRelativePath", "C_Shield.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Shield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Shield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Shield_Statics::ClassParams = {
		&AC_Shield::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_Shield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Shield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Shield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Shield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Shield, 2464904807);
	template<> STARFIGHTER_API UClass* StaticClass<AC_Shield>()
	{
		return AC_Shield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Shield(Z_Construct_UClass_AC_Shield, &AC_Shield::StaticClass, TEXT("/Script/StarFighter"), TEXT("AC_Shield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Shield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
