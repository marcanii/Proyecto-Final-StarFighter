// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Asteroids.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroids() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AAsteroids_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AAsteroids();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AAsteroids::StaticRegisterNativesAAsteroids()
	{
	}
	UClass* Z_Construct_UClass_AAsteroids_NoRegister()
	{
		return AAsteroids::StaticClass();
	}
	struct Z_Construct_UClass_AAsteroids_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshAsteroid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshAsteroid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsteroidCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AsteroidCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsteroidExplosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AsteroidExplosion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteroids_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroids_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asteroids.h" },
		{ "ModuleRelativePath", "Asteroids.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroids_Statics::NewProp_DefaulSceneRoot_MetaData[] = {
		{ "Category", "Asteroids" },
		{ "Comment", "// Propiedades del asteroide\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asteroids.h" },
		{ "ToolTip", "Propiedades del asteroide" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroids_Statics::NewProp_DefaulSceneRoot = { "DefaulSceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroids, DefaulSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroids_Statics::NewProp_DefaulSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroids_Statics::NewProp_DefaulSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroids_Statics::NewProp_MeshAsteroid_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// componente ruta\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asteroids.h" },
		{ "ToolTip", "componente ruta" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroids_Statics::NewProp_MeshAsteroid = { "MeshAsteroid", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroids, MeshAsteroid), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroids_Statics::NewProp_MeshAsteroid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroids_Statics::NewProp_MeshAsteroid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroids_Statics::NewProp_SoundDestroy_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// mesh del asteroide\n" },
		{ "ModuleRelativePath", "Asteroids.h" },
		{ "ToolTip", "mesh del asteroide" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroids_Statics::NewProp_SoundDestroy = { "SoundDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroids, SoundDestroy), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroids_Statics::NewProp_SoundDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroids_Statics::NewProp_SoundDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidCollision_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// sonido al destruirse\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asteroids.h" },
		{ "ToolTip", "sonido al destruirse" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidCollision = { "AsteroidCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroids, AsteroidCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidExplosion_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// para colisiones\n" },
		{ "ModuleRelativePath", "Asteroids.h" },
		{ "ToolTip", "para colisiones" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidExplosion = { "AsteroidExplosion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroids, AsteroidExplosion), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidExplosion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroids_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroids_Statics::NewProp_DefaulSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroids_Statics::NewProp_MeshAsteroid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroids_Statics::NewProp_SoundDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroids_Statics::NewProp_AsteroidExplosion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteroids_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroids>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsteroids_Statics::ClassParams = {
		&AAsteroids::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAsteroids_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroids_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAsteroids_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroids_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteroids()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteroids_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroids, 3882696640);
	template<> STARFIGHTER_API UClass* StaticClass<AAsteroids>()
	{
		return AAsteroids::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroids(Z_Construct_UClass_AAsteroids, &AAsteroids::StaticClass, TEXT("/Script/StarFighter"), TEXT("AAsteroids"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroids);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
