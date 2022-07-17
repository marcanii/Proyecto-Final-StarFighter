// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaFM_AmmoPodGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_AmmoPodGenerator() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_AmmoPodGenerator_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_AmmoPodGenerator();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_CapsuleGenerator();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APaFM_AmmoPodGenerator::StaticRegisterNativesAPaFM_AmmoPodGenerator()
	{
	}
	UClass* Z_Construct_UClass_APaFM_AmmoPodGenerator_NoRegister()
	{
		return APaFM_AmmoPodGenerator::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_AmmoPodGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_AmmoPodGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_CapsuleGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_AmmoPodGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaFM_AmmoPodGenerator.h" },
		{ "ModuleRelativePath", "PaFM_AmmoPodGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_AmmoPodGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_AmmoPodGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_AmmoPodGenerator_Statics::ClassParams = {
		&APaFM_AmmoPodGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_AmmoPodGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_AmmoPodGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_AmmoPodGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_AmmoPodGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_AmmoPodGenerator, 3112166122);
	template<> STARFIGHTER_API UClass* StaticClass<APaFM_AmmoPodGenerator>()
	{
		return APaFM_AmmoPodGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_AmmoPodGenerator(Z_Construct_UClass_APaFM_AmmoPodGenerator, &APaFM_AmmoPodGenerator::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaFM_AmmoPodGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_AmmoPodGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
