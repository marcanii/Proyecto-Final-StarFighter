// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EnemyLevel5.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyLevel5() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyLevel5_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyLevel5();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShip();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AEnemyLevel5::StaticRegisterNativesAEnemyLevel5()
	{
	}
	UClass* Z_Construct_UClass_AEnemyLevel5_NoRegister()
	{
		return AEnemyLevel5::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyLevel5_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyLevel5_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyShip,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyLevel5_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyLevel5.h" },
		{ "ModuleRelativePath", "EnemyLevel5.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyLevel5_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyLevel5>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyLevel5_Statics::ClassParams = {
		&AEnemyLevel5::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemyLevel5_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyLevel5_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyLevel5()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyLevel5_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyLevel5, 425910473);
	template<> STARFIGHTER_API UClass* StaticClass<AEnemyLevel5>()
	{
		return AEnemyLevel5::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyLevel5(Z_Construct_UClass_AEnemyLevel5, &AEnemyLevel5::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEnemyLevel5"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyLevel5);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
