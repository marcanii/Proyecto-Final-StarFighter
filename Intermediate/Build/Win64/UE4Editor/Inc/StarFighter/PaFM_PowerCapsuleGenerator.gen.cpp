// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaFM_PowerCapsuleGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_PowerCapsuleGenerator() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_PowerCapsuleGenerator_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_PowerCapsuleGenerator();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_CapsuleGenerator();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APaFM_PowerCapsuleGenerator::StaticRegisterNativesAPaFM_PowerCapsuleGenerator()
	{
	}
	UClass* Z_Construct_UClass_APaFM_PowerCapsuleGenerator_NoRegister()
	{
		return APaFM_PowerCapsuleGenerator::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_PowerCapsuleGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_PowerCapsuleGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_CapsuleGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_PowerCapsuleGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaFM_PowerCapsuleGenerator.h" },
		{ "ModuleRelativePath", "PaFM_PowerCapsuleGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_PowerCapsuleGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_PowerCapsuleGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_PowerCapsuleGenerator_Statics::ClassParams = {
		&APaFM_PowerCapsuleGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_PowerCapsuleGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_PowerCapsuleGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_PowerCapsuleGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_PowerCapsuleGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_PowerCapsuleGenerator, 3343602268);
	template<> STARFIGHTER_API UClass* StaticClass<APaFM_PowerCapsuleGenerator>()
	{
		return APaFM_PowerCapsuleGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_PowerCapsuleGenerator(Z_Construct_UClass_APaFM_PowerCapsuleGenerator, &APaFM_PowerCapsuleGenerator::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaFM_PowerCapsuleGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_PowerCapsuleGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
