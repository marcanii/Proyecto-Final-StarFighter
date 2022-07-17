// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaS_Scenery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaS_Scenery() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaS_Scenery_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaS_Scenery();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void APaS_Scenery::StaticRegisterNativesAPaS_Scenery()
	{
	}
	UClass* Z_Construct_UClass_APaS_Scenery_NoRegister()
	{
		return APaS_Scenery::StaticClass();
	}
	struct Z_Construct_UClass_APaS_Scenery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneryMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneryMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneryMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneryMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaS_Scenery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_Scenery_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaS_Scenery.h" },
		{ "ModuleRelativePath", "PaS_Scenery.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMesh_MetaData[] = {
		{ "Category", "Niveles del juego" },
		{ "Comment", "// Mesh del escenario\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PaS_Scenery.h" },
		{ "ToolTip", "Mesh del escenario" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMesh = { "SceneryMesh", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaS_Scenery, SceneryMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMaterial_MetaData[] = {
		{ "Category", "PaS_Scenery" },
		{ "Comment", "// material del mesh escenario\n" },
		{ "ModuleRelativePath", "PaS_Scenery.h" },
		{ "ToolTip", "material del mesh escenario" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMaterial = { "SceneryMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaS_Scenery, SceneryMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaS_Scenery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaS_Scenery_Statics::NewProp_SceneryMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaS_Scenery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaS_Scenery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaS_Scenery_Statics::ClassParams = {
		&APaS_Scenery::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaS_Scenery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Scenery_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaS_Scenery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Scenery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaS_Scenery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaS_Scenery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaS_Scenery, 3183612791);
	template<> STARFIGHTER_API UClass* StaticClass<APaS_Scenery>()
	{
		return APaS_Scenery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaS_Scenery(Z_Construct_UClass_APaS_Scenery, &APaS_Scenery::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaS_Scenery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaS_Scenery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
