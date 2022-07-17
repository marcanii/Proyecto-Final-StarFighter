// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/SpaceShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShip() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ASpaceShip_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ASpaceShip();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ASpaceShip::StaticRegisterNativesASpaceShip()
	{
	}
	UClass* Z_Construct_UClass_ASpaceShip_NoRegister()
	{
		return ASpaceShip::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpaceShip.h" },
		{ "ModuleRelativePath", "SpaceShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldWidth_MetaData[] = {
		{ "Category", "Campo de Juego" },
		{ "Comment", "// propiedades para la nave...\n" },
		{ "ModuleRelativePath", "SpaceShip.h" },
		{ "ToolTip", "propiedades para la nave..." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldWidth = { "FieldWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShip, FieldWidth), METADATA_PARAMS(Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldHeight_MetaData[] = {
		{ "Category", "Campo de Juego" },
		{ "Comment", "// ancho del campo\n" },
		{ "ModuleRelativePath", "SpaceShip.h" },
		{ "ToolTip", "ancho del campo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldHeight = { "FieldHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShip, FieldHeight), METADATA_PARAMS(Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShip_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Velocidad Nave" },
		{ "Comment", "// altura del campo\n" },
		{ "ModuleRelativePath", "SpaceShip.h" },
		{ "ToolTip", "altura del campo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShip_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShip, Velocity), METADATA_PARAMS(Z_Construct_UClass_ASpaceShip_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::NewProp_Velocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_FieldHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShip_Statics::NewProp_Velocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceShip_Statics::ClassParams = {
		&ASpaceShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpaceShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceShip, 2210188139);
	template<> STARFIGHTER_API UClass* StaticClass<ASpaceShip>()
	{
		return ASpaceShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceShip(Z_Construct_UClass_ASpaceShip, &ASpaceShip::StaticClass, TEXT("/Script/StarFighter"), TEXT("ASpaceShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
