// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaB_SquadBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaB_SquadBuilder() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaB_SquadBuilder_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaB_SquadBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UPaB_SquadBuilder::StaticRegisterNativesUPaB_SquadBuilder()
	{
	}
	UClass* Z_Construct_UClass_UPaB_SquadBuilder_NoRegister()
	{
		return UPaB_SquadBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPaB_SquadBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaB_SquadBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaB_SquadBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PaB_SquadBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaB_SquadBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaB_SquadBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaB_SquadBuilder_Statics::ClassParams = {
		&UPaB_SquadBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaB_SquadBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaB_SquadBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaB_SquadBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaB_SquadBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaB_SquadBuilder, 816888245);
	template<> STARFIGHTER_API UClass* StaticClass<UPaB_SquadBuilder>()
	{
		return UPaB_SquadBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaB_SquadBuilder(Z_Construct_UClass_UPaB_SquadBuilder, &UPaB_SquadBuilder::StaticClass, TEXT("/Script/StarFighter"), TEXT("UPaB_SquadBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaB_SquadBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
