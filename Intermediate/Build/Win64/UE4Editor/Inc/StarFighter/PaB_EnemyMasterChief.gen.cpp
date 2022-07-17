// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaB_EnemyMasterChief.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaB_EnemyMasterChief() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaB_EnemyMasterChief_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaB_EnemyMasterChief();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APaB_EnemyMasterChief::StaticRegisterNativesAPaB_EnemyMasterChief()
	{
	}
	UClass* Z_Construct_UClass_APaB_EnemyMasterChief_NoRegister()
	{
		return APaB_EnemyMasterChief::StaticClass();
	}
	struct Z_Construct_UClass_APaB_EnemyMasterChief_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaB_EnemyMasterChief_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaB_EnemyMasterChief_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaB_EnemyMasterChief.h" },
		{ "ModuleRelativePath", "PaB_EnemyMasterChief.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaB_EnemyMasterChief_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaB_EnemyMasterChief>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaB_EnemyMasterChief_Statics::ClassParams = {
		&APaB_EnemyMasterChief::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaB_EnemyMasterChief_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaB_EnemyMasterChief_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaB_EnemyMasterChief()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaB_EnemyMasterChief_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaB_EnemyMasterChief, 2946046397);
	template<> STARFIGHTER_API UClass* StaticClass<APaB_EnemyMasterChief>()
	{
		return APaB_EnemyMasterChief::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaB_EnemyMasterChief(Z_Construct_UClass_APaB_EnemyMasterChief, &APaB_EnemyMasterChief::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaB_EnemyMasterChief"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaB_EnemyMasterChief);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
