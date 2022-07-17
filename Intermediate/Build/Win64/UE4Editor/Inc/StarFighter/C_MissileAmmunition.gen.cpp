// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/C_MissileAmmunition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_MissileAmmunition() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_MissileAmmunition_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_MissileAmmunition();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AC_MissileAmmunition::StaticRegisterNativesAC_MissileAmmunition()
	{
	}
	UClass* Z_Construct_UClass_AC_MissileAmmunition_NoRegister()
	{
		return AC_MissileAmmunition::StaticClass();
	}
	struct Z_Construct_UClass_AC_MissileAmmunition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_MissileAmmunition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_MissileAmmunition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_MissileAmmunition.h" },
		{ "ModuleRelativePath", "C_MissileAmmunition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_MissileAmmunition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_MissileAmmunition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_MissileAmmunition_Statics::ClassParams = {
		&AC_MissileAmmunition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_MissileAmmunition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_MissileAmmunition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_MissileAmmunition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_MissileAmmunition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_MissileAmmunition, 636735361);
	template<> STARFIGHTER_API UClass* StaticClass<AC_MissileAmmunition>()
	{
		return AC_MissileAmmunition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_MissileAmmunition(Z_Construct_UClass_AC_MissileAmmunition, &AC_MissileAmmunition::StaticClass, TEXT("/Script/StarFighter"), TEXT("AC_MissileAmmunition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_MissileAmmunition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
