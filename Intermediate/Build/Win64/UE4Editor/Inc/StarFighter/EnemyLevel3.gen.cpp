// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EnemyLevel3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyLevel3() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyLevel3_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyLevel3();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShip();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AEnemyLevel3::StaticRegisterNativesAEnemyLevel3()
	{
	}
	UClass* Z_Construct_UClass_AEnemyLevel3_NoRegister()
	{
		return AEnemyLevel3::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyLevel3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyLevel3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyShip,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyLevel3_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyLevel3.h" },
		{ "ModuleRelativePath", "EnemyLevel3.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyLevel3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyLevel3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyLevel3_Statics::ClassParams = {
		&AEnemyLevel3::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemyLevel3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyLevel3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyLevel3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyLevel3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyLevel3, 2508227089);
	template<> STARFIGHTER_API UClass* StaticClass<AEnemyLevel3>()
	{
		return AEnemyLevel3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyLevel3(Z_Construct_UClass_AEnemyLevel3, &AEnemyLevel3::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEnemyLevel3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyLevel3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
