// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaS_Lasser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaS_Lasser() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaS_Lasser_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaS_Lasser();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaS_ChangeWeapon_NoRegister();
// End Cross Module References
	void APaS_Lasser::StaticRegisterNativesAPaS_Lasser()
	{
	}
	UClass* Z_Construct_UClass_APaS_Lasser_NoRegister()
	{
		return APaS_Lasser::StaticClass();
	}
	struct Z_Construct_UClass_APaS_Lasser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaS_Lasser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_Lasser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaS_Lasser.h" },
		{ "ModuleRelativePath", "PaS_Lasser.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaS_Lasser_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaS_ChangeWeapon_NoRegister, (int32)VTABLE_OFFSET(APaS_Lasser, IPaS_ChangeWeapon), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaS_Lasser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaS_Lasser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaS_Lasser_Statics::ClassParams = {
		&APaS_Lasser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaS_Lasser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Lasser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaS_Lasser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaS_Lasser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaS_Lasser, 3189133336);
	template<> STARFIGHTER_API UClass* StaticClass<APaS_Lasser>()
	{
		return APaS_Lasser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaS_Lasser(Z_Construct_UClass_APaS_Lasser, &APaS_Lasser::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaS_Lasser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaS_Lasser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
