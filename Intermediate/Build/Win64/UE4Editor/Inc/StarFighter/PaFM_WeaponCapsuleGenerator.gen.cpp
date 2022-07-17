// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaFM_WeaponCapsuleGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_WeaponCapsuleGenerator() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_WeaponCapsuleGenerator();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_CapsuleGenerator();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APaFM_WeaponCapsuleGenerator::StaticRegisterNativesAPaFM_WeaponCapsuleGenerator()
	{
	}
	UClass* Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_NoRegister()
	{
		return APaFM_WeaponCapsuleGenerator::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_CapsuleGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaFM_WeaponCapsuleGenerator.h" },
		{ "ModuleRelativePath", "PaFM_WeaponCapsuleGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_WeaponCapsuleGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_Statics::ClassParams = {
		&APaFM_WeaponCapsuleGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_WeaponCapsuleGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_WeaponCapsuleGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_WeaponCapsuleGenerator, 854536296);
	template<> STARFIGHTER_API UClass* StaticClass<APaFM_WeaponCapsuleGenerator>()
	{
		return APaFM_WeaponCapsuleGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_WeaponCapsuleGenerator(Z_Construct_UClass_APaFM_WeaponCapsuleGenerator, &APaFM_WeaponCapsuleGenerator::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaFM_WeaponCapsuleGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_WeaponCapsuleGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
