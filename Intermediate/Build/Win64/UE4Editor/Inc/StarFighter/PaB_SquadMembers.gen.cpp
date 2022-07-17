// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaB_SquadMembers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaB_SquadMembers() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaB_SquadMembers_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaB_SquadMembers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UPaB_SquadMembers::StaticRegisterNativesUPaB_SquadMembers()
	{
	}
	UClass* Z_Construct_UClass_UPaB_SquadMembers_NoRegister()
	{
		return UPaB_SquadMembers::StaticClass();
	}
	struct Z_Construct_UClass_UPaB_SquadMembers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaB_SquadMembers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaB_SquadMembers_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PaB_SquadMembers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaB_SquadMembers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaB_SquadMembers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaB_SquadMembers_Statics::ClassParams = {
		&UPaB_SquadMembers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaB_SquadMembers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaB_SquadMembers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaB_SquadMembers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaB_SquadMembers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaB_SquadMembers, 4255829196);
	template<> STARFIGHTER_API UClass* StaticClass<UPaB_SquadMembers>()
	{
		return UPaB_SquadMembers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaB_SquadMembers(Z_Construct_UClass_UPaB_SquadMembers, &UPaB_SquadMembers::StaticClass, TEXT("/Script/StarFighter"), TEXT("UPaB_SquadMembers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaB_SquadMembers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
