// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PJ_BulletLevel2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJ_BulletLevel2() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APJ_BulletLevel2_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APJ_BulletLevel2();
	STARFIGHTER_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APJ_BulletLevel2::StaticRegisterNativesAPJ_BulletLevel2()
	{
	}
	UClass* Z_Construct_UClass_APJ_BulletLevel2_NoRegister()
	{
		return APJ_BulletLevel2::StaticClass();
	}
	struct Z_Construct_UClass_APJ_BulletLevel2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APJ_BulletLevel2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APJ_BulletLevel2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PJ_BulletLevel2.h" },
		{ "ModuleRelativePath", "PJ_BulletLevel2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APJ_BulletLevel2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APJ_BulletLevel2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APJ_BulletLevel2_Statics::ClassParams = {
		&APJ_BulletLevel2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APJ_BulletLevel2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APJ_BulletLevel2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APJ_BulletLevel2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APJ_BulletLevel2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APJ_BulletLevel2, 1236751953);
	template<> STARFIGHTER_API UClass* StaticClass<APJ_BulletLevel2>()
	{
		return APJ_BulletLevel2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APJ_BulletLevel2(Z_Construct_UClass_APJ_BulletLevel2, &APJ_BulletLevel2::StaticClass, TEXT("/Script/StarFighter"), TEXT("APJ_BulletLevel2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APJ_BulletLevel2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
