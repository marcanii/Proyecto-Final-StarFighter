// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/StarFighterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarFighterGameModeBase() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AStarFighterGameModeBase_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AStarFighterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AStarFighterGameModeBase::StaticRegisterNativesAStarFighterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AStarFighterGameModeBase_NoRegister()
	{
		return AStarFighterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStarFighterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSpawnAsteroids_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSpawnAsteroids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundAlarm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundAlarm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarFighterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StarFighterGameModeBase.h" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundSpawnAsteroids_MetaData[] = {
		{ "Category", "Componentes Asteroides" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundSpawnAsteroids = { "SoundSpawnAsteroids", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarFighterGameModeBase, SoundSpawnAsteroids), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundSpawnAsteroids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundSpawnAsteroids_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundAlarm_MetaData[] = {
		{ "Category", "Sonido Alarma" },
		{ "Comment", "// sonido al espawnear\n" },
		{ "ModuleRelativePath", "StarFighterGameModeBase.h" },
		{ "ToolTip", "sonido al espawnear" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundAlarm = { "SoundAlarm", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStarFighterGameModeBase, SoundAlarm), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundAlarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundAlarm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarFighterGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundSpawnAsteroids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarFighterGameModeBase_Statics::NewProp_SoundAlarm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarFighterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarFighterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarFighterGameModeBase_Statics::ClassParams = {
		&AStarFighterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStarFighterGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStarFighterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFighterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarFighterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarFighterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarFighterGameModeBase, 4163458284);
	template<> STARFIGHTER_API UClass* StaticClass<AStarFighterGameModeBase>()
	{
		return AStarFighterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarFighterGameModeBase(Z_Construct_UClass_AStarFighterGameModeBase, &AStarFighterGameModeBase::StaticClass, TEXT("/Script/StarFighter"), TEXT("AStarFighterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarFighterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
