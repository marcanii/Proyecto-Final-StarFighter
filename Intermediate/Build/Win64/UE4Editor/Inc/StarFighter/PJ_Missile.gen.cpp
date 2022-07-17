// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PJ_Missile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJ_Missile() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APJ_Missile_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APJ_Missile();
	STARFIGHTER_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APJ_Missile::StaticRegisterNativesAPJ_Missile()
	{
	}
	UClass* Z_Construct_UClass_APJ_Missile_NoRegister()
	{
		return APJ_Missile::StaticClass();
	}
	struct Z_Construct_UClass_APJ_Missile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APJ_Missile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APJ_Missile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PJ_Missile.h" },
		{ "ModuleRelativePath", "PJ_Missile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APJ_Missile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APJ_Missile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APJ_Missile_Statics::ClassParams = {
		&APJ_Missile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APJ_Missile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APJ_Missile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APJ_Missile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APJ_Missile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APJ_Missile, 1017645390);
	template<> STARFIGHTER_API UClass* StaticClass<APJ_Missile>()
	{
		return APJ_Missile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APJ_Missile(Z_Construct_UClass_APJ_Missile, &APJ_Missile::StaticClass, TEXT("/Script/StarFighter"), TEXT("APJ_Missile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APJ_Missile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
