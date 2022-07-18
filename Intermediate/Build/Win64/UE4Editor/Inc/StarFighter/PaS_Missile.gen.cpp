// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaS_Missile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaS_Missile() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaS_Missile_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaS_Missile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaS_ChangeWeapon_NoRegister();
// End Cross Module References
	void APaS_Missile::StaticRegisterNativesAPaS_Missile()
	{
	}
	UClass* Z_Construct_UClass_APaS_Missile_NoRegister()
	{
		return APaS_Missile::StaticClass();
	}
	struct Z_Construct_UClass_APaS_Missile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaS_Missile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_Missile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaS_Missile.h" },
		{ "ModuleRelativePath", "PaS_Missile.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaS_Missile_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaS_ChangeWeapon_NoRegister, (int32)VTABLE_OFFSET(APaS_Missile, IPaS_ChangeWeapon), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaS_Missile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaS_Missile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaS_Missile_Statics::ClassParams = {
		&APaS_Missile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaS_Missile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Missile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaS_Missile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaS_Missile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaS_Missile, 1597270337);
	template<> STARFIGHTER_API UClass* StaticClass<APaS_Missile>()
	{
		return APaS_Missile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaS_Missile(Z_Construct_UClass_APaS_Missile, &APaS_Missile::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaS_Missile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaS_Missile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
