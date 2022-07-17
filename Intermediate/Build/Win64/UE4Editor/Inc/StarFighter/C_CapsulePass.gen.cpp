// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/C_CapsulePass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_CapsulePass() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_CapsulePass_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_CapsulePass();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AC_CapsulePass::StaticRegisterNativesAC_CapsulePass()
	{
	}
	UClass* Z_Construct_UClass_AC_CapsulePass_NoRegister()
	{
		return AC_CapsulePass::StaticClass();
	}
	struct Z_Construct_UClass_AC_CapsulePass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_CapsulePass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_CapsulePass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_CapsulePass.h" },
		{ "ModuleRelativePath", "C_CapsulePass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_CapsulePass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_CapsulePass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_CapsulePass_Statics::ClassParams = {
		&AC_CapsulePass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_CapsulePass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_CapsulePass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_CapsulePass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_CapsulePass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_CapsulePass, 4018137167);
	template<> STARFIGHTER_API UClass* StaticClass<AC_CapsulePass>()
	{
		return AC_CapsulePass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_CapsulePass(Z_Construct_UClass_AC_CapsulePass, &AC_CapsulePass::StaticClass, TEXT("/Script/StarFighter"), TEXT("AC_CapsulePass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_CapsulePass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
