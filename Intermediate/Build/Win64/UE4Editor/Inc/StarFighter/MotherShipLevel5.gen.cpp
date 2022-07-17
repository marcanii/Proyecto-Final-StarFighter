// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/MotherShipLevel5.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotherShipLevel5() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AMotherShipLevel5_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMotherShipLevel5();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShip();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AMotherShipLevel5::StaticRegisterNativesAMotherShipLevel5()
	{
	}
	UClass* Z_Construct_UClass_AMotherShipLevel5_NoRegister()
	{
		return AMotherShipLevel5::StaticClass();
	}
	struct Z_Construct_UClass_AMotherShipLevel5_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotherShipLevel5_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyShip,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotherShipLevel5_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MotherShipLevel5.h" },
		{ "ModuleRelativePath", "MotherShipLevel5.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotherShipLevel5_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotherShipLevel5>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotherShipLevel5_Statics::ClassParams = {
		&AMotherShipLevel5::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMotherShipLevel5_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotherShipLevel5_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotherShipLevel5()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotherShipLevel5_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotherShipLevel5, 3441689929);
	template<> STARFIGHTER_API UClass* StaticClass<AMotherShipLevel5>()
	{
		return AMotherShipLevel5::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotherShipLevel5(Z_Construct_UClass_AMotherShipLevel5, &AMotherShipLevel5::StaticClass, TEXT("/Script/StarFighter"), TEXT("AMotherShipLevel5"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotherShipLevel5);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
