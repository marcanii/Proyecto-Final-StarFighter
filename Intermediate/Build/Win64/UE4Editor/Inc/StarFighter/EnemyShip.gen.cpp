// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EnemyShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShip() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShip_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShip();
	STARFIGHTER_API UClass* Z_Construct_UClass_ASpaceShip();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AEnemyShip::StaticRegisterNativesAEnemyShip()
	{
	}
	UClass* Z_Construct_UClass_AEnemyShip_NoRegister()
	{
		return AEnemyShip::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaulSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaulSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipExplosionEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipExplosionEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipEnemyCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipEnemyCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpaceShip,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyShip.h" },
		{ "ModuleRelativePath", "EnemyShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::NewProp_DefaulSceneRoot_MetaData[] = {
		{ "Category", "EnemyShip" },
		{ "Comment", "// Propiedades de la nave padre\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyShip.h" },
		{ "ToolTip", "Propiedades de la nave padre" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShip_Statics::NewProp_DefaulSceneRoot = { "DefaulSceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShip, DefaulSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::NewProp_DefaulSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::NewProp_DefaulSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipMeshEnemy_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Propiedades de la nave padre\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyShip.h" },
		{ "ToolTip", "Propiedades de la nave padre" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipMeshEnemy = { "ShipMeshEnemy", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShip, ShipMeshEnemy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipMeshEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipMeshEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipExplosionEnemy_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// la malla o cascara\n" },
		{ "ModuleRelativePath", "EnemyShip.h" },
		{ "ToolTip", "la malla o cascara" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipExplosionEnemy = { "ShipExplosionEnemy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShip, ShipExplosionEnemy), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipExplosionEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipExplosionEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipEnemyCollision_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// para la explosion\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyShip.h" },
		{ "ToolTip", "para la explosion" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipEnemyCollision = { "ShipEnemyCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShip, ShipEnemyCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipEnemyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipEnemyCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::NewProp_ExplosionSound_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// para colisiones\n" },
		{ "ModuleRelativePath", "EnemyShip.h" },
		{ "ToolTip", "para colisiones" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShip_Statics::NewProp_ExplosionSound = { "ExplosionSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShip, ExplosionSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ExplosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ExplosionSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShip_Statics::NewProp_DefaulSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipMeshEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipExplosionEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShip_Statics::NewProp_ShipEnemyCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShip_Statics::NewProp_ExplosionSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShip_Statics::ClassParams = {
		&AEnemyShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyShip, 3983402589);
	template<> STARFIGHTER_API UClass* StaticClass<AEnemyShip>()
	{
		return AEnemyShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyShip(Z_Construct_UClass_AEnemyShip, &AEnemyShip::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEnemyShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
