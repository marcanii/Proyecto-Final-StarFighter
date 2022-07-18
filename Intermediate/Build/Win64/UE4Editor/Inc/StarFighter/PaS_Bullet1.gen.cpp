// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaS_Bullet1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaS_Bullet1() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaS_Bullet1_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaS_Bullet1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaS_ChangeWeapon_NoRegister();
// End Cross Module References
	void APaS_Bullet1::StaticRegisterNativesAPaS_Bullet1()
	{
	}
	UClass* Z_Construct_UClass_APaS_Bullet1_NoRegister()
	{
		return APaS_Bullet1::StaticClass();
	}
	struct Z_Construct_UClass_APaS_Bullet1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaS_Bullet1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_Bullet1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaS_Bullet1.h" },
		{ "ModuleRelativePath", "PaS_Bullet1.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaS_Bullet1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaS_ChangeWeapon_NoRegister, (int32)VTABLE_OFFSET(APaS_Bullet1, IPaS_ChangeWeapon), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaS_Bullet1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaS_Bullet1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaS_Bullet1_Statics::ClassParams = {
		&APaS_Bullet1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaS_Bullet1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Bullet1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaS_Bullet1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaS_Bullet1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaS_Bullet1, 877667582);
	template<> STARFIGHTER_API UClass* StaticClass<APaS_Bullet1>()
	{
		return APaS_Bullet1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaS_Bullet1(Z_Construct_UClass_APaS_Bullet1, &APaS_Bullet1::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaS_Bullet1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaS_Bullet1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
