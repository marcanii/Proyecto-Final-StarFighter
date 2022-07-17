// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/C_Energy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Energy() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_Energy_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_Energy();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AC_Energy::StaticRegisterNativesAC_Energy()
	{
	}
	UClass* Z_Construct_UClass_AC_Energy_NoRegister()
	{
		return AC_Energy::StaticClass();
	}
	struct Z_Construct_UClass_AC_Energy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Energy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Energy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_Energy.h" },
		{ "ModuleRelativePath", "C_Energy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Energy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Energy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Energy_Statics::ClassParams = {
		&AC_Energy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_Energy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Energy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Energy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Energy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Energy, 3360396020);
	template<> STARFIGHTER_API UClass* StaticClass<AC_Energy>()
	{
		return AC_Energy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Energy(Z_Construct_UClass_AC_Energy, &AC_Energy::StaticClass, TEXT("/Script/StarFighter"), TEXT("AC_Energy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Energy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
