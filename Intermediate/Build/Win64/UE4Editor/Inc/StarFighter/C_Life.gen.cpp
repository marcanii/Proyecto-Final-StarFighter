// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/C_Life.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Life() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_Life_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_Life();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AC_Life::StaticRegisterNativesAC_Life()
	{
	}
	UClass* Z_Construct_UClass_AC_Life_NoRegister()
	{
		return AC_Life::StaticClass();
	}
	struct Z_Construct_UClass_AC_Life_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Life_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Life_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_Life.h" },
		{ "ModuleRelativePath", "C_Life.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Life_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Life>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Life_Statics::ClassParams = {
		&AC_Life::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_Life_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Life_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Life()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Life_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Life, 4230450853);
	template<> STARFIGHTER_API UClass* StaticClass<AC_Life>()
	{
		return AC_Life::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Life(Z_Construct_UClass_AC_Life, &AC_Life::StaticClass, TEXT("/Script/StarFighter"), TEXT("AC_Life"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Life);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
