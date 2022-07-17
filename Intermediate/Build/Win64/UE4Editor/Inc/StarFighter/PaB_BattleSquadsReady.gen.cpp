// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaB_BattleSquadsReady.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaB_BattleSquadsReady() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaB_BattleSquadsReady_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaB_BattleSquadsReady();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaB_SquadBuilder_NoRegister();
// End Cross Module References
	void APaB_BattleSquadsReady::StaticRegisterNativesAPaB_BattleSquadsReady()
	{
	}
	UClass* Z_Construct_UClass_APaB_BattleSquadsReady_NoRegister()
	{
		return APaB_BattleSquadsReady::StaticClass();
	}
	struct Z_Construct_UClass_APaB_BattleSquadsReady_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaB_BattleSquadsReady_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaB_BattleSquadsReady_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaB_BattleSquadsReady.h" },
		{ "ModuleRelativePath", "PaB_BattleSquadsReady.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaB_BattleSquadsReady_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaB_SquadBuilder_NoRegister, (int32)VTABLE_OFFSET(APaB_BattleSquadsReady, IPaB_SquadBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaB_BattleSquadsReady_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaB_BattleSquadsReady>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaB_BattleSquadsReady_Statics::ClassParams = {
		&APaB_BattleSquadsReady::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaB_BattleSquadsReady_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaB_BattleSquadsReady_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaB_BattleSquadsReady()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaB_BattleSquadsReady_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaB_BattleSquadsReady, 4131061374);
	template<> STARFIGHTER_API UClass* StaticClass<APaB_BattleSquadsReady>()
	{
		return APaB_BattleSquadsReady::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaB_BattleSquadsReady(Z_Construct_UClass_APaB_BattleSquadsReady, &APaB_BattleSquadsReady::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaB_BattleSquadsReady"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaB_BattleSquadsReady);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
