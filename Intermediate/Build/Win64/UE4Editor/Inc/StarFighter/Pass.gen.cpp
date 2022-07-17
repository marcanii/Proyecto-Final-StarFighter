// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Pass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePass() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APass_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APass::StaticRegisterNativesAPass()
	{
	}
	UClass* Z_Construct_UClass_APass_NoRegister()
	{
		return APass::StaticClass();
	}
	struct Z_Construct_UClass_APass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pass.h" },
		{ "ModuleRelativePath", "Pass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APass_Statics::ClassParams = {
		&APass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APass, 1296136261);
	template<> STARFIGHTER_API UClass* StaticClass<APass>()
	{
		return APass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APass(Z_Construct_UClass_APass, &APass::StaticClass, TEXT("/Script/StarFighter"), TEXT("APass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
