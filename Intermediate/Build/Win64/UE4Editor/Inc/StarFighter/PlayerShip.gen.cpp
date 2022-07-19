// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PlayerShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShip() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APlayerShip_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APlayerShip();
	STARFIGHTER_API UClass* Z_Construct_UClass_ASpaceShip();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerShip::execgetGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getGameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execsetScoreValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setScoreValue(Z_Param__Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetScoreValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getScoreValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetLevelValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getLevelValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetNumbersMissileBullets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getNumbersMissileBullets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetNumbersLaserBullets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getNumbersLaserBullets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetNumbersBulletsGun2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getNumbersBulletsGun2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetNumbersBulletsGun1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getNumbersBulletsGun1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetLives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getLives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execgetArmor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getArmor();
		P_NATIVE_END;
	}
	void APlayerShip::StaticRegisterNativesAPlayerShip()
	{
		UClass* Class = APlayerShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getArmor", &APlayerShip::execgetArmor },
			{ "getGameOver", &APlayerShip::execgetGameOver },
			{ "getHealth", &APlayerShip::execgetHealth },
			{ "getLevelValue", &APlayerShip::execgetLevelValue },
			{ "getLives", &APlayerShip::execgetLives },
			{ "getNumbersBulletsGun1", &APlayerShip::execgetNumbersBulletsGun1 },
			{ "getNumbersBulletsGun2", &APlayerShip::execgetNumbersBulletsGun2 },
			{ "getNumbersLaserBullets", &APlayerShip::execgetNumbersLaserBullets },
			{ "getNumbersMissileBullets", &APlayerShip::execgetNumbersMissileBullets },
			{ "getScoreValue", &APlayerShip::execgetScoreValue },
			{ "setScoreValue", &APlayerShip::execsetScoreValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerShip_getArmor_Statics
	{
		struct PlayerShip_eventgetArmor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_getArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetArmor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getArmor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getArmor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// metodos que seran usados en los bluwprint en unreal\n// metodo que devuelven el escudo\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "metodos que seran usados en los bluwprint en unreal\nmetodo que devuelven el escudo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getArmor", nullptr, nullptr, sizeof(PlayerShip_eventgetArmor_Parms), Z_Construct_UFunction_APlayerShip_getArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getGameOver_Statics
	{
		struct PlayerShip_eventgetGameOver_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_getGameOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetGameOver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getGameOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getGameOver_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve true o false de que si el jugador murio\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve true o false de que si el jugador murio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getGameOver", nullptr, nullptr, sizeof(PlayerShip_eventgetGameOver_Parms), Z_Construct_UFunction_APlayerShip_getGameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getGameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getHealth_Statics
	{
		struct PlayerShip_eventgetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_getHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// metodo que devuelve la energia \n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "metodo que devuelve la energia" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getHealth", nullptr, nullptr, sizeof(PlayerShip_eventgetHealth_Parms), Z_Construct_UFunction_APlayerShip_getHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getLevelValue_Statics
	{
		struct PlayerShip_eventgetLevelValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetLevelValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve el nivel en el que estamos\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve el nivel en el que estamos" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getLevelValue", nullptr, nullptr, sizeof(PlayerShip_eventgetLevelValue_Parms), Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getLevelValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getLevelValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getLives_Statics
	{
		struct PlayerShip_eventgetLives_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_getLives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetLives_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getLives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getLives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getLives_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve el numero de vidas\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve el numero de vidas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getLives", nullptr, nullptr, sizeof(PlayerShip_eventgetLives_Parms), Z_Construct_UFunction_APlayerShip_getLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getLives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getLives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getLives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics
	{
		struct PlayerShip_eventgetNumbersBulletsGun1_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetNumbersBulletsGun1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve el numero de balas del arma 1\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve el numero de balas del arma 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getNumbersBulletsGun1", nullptr, nullptr, sizeof(PlayerShip_eventgetNumbersBulletsGun1_Parms), Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics
	{
		struct PlayerShip_eventgetNumbersBulletsGun2_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetNumbersBulletsGun2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve el numero de balas del arma 1\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve el numero de balas del arma 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getNumbersBulletsGun2", nullptr, nullptr, sizeof(PlayerShip_eventgetNumbersBulletsGun2_Parms), Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics
	{
		struct PlayerShip_eventgetNumbersLaserBullets_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetNumbersLaserBullets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve el numero de balas del laser\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve el numero de balas del laser" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getNumbersLaserBullets", nullptr, nullptr, sizeof(PlayerShip_eventgetNumbersLaserBullets_Parms), Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics
	{
		struct PlayerShip_eventgetNumbersMissileBullets_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetNumbersMissileBullets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve el numero de balas del misil\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve el numero de balas del misil" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getNumbersMissileBullets", nullptr, nullptr, sizeof(PlayerShip_eventgetNumbersMissileBullets_Parms), Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_getScoreValue_Statics
	{
		struct PlayerShip_eventgetScoreValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventgetScoreValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve el record del jugador\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve el record del jugador" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "getScoreValue", nullptr, nullptr, sizeof(PlayerShip_eventgetScoreValue_Parms), Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_getScoreValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_getScoreValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_setScoreValue_Statics
	{
		struct PlayerShip_eventsetScoreValue_Parms
		{
			int32 _Score;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::NewProp__Score = { "_Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerShip_eventsetScoreValue_Parms, _Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::NewProp__Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// devuelve el record del jugador\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "devuelve el record del jugador" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "setScoreValue", nullptr, nullptr, sizeof(PlayerShip_eventsetScoreValue_Parms), Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_setScoreValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerShip_setScoreValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerShip_NoRegister()
	{
		return APlayerShip::StaticClass();
	}
	struct Z_Construct_UClass_APlayerShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaulSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaulSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipExplosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipExplosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSoundShip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSoundShip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBullet1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBullet1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBullet2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBullet2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundLaser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundLaser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundMissile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundMissile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSelectWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSelectWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthWidgetComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpaceShip,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerShip_getArmor, "getArmor" }, // 1369839257
		{ &Z_Construct_UFunction_APlayerShip_getGameOver, "getGameOver" }, // 2339678134
		{ &Z_Construct_UFunction_APlayerShip_getHealth, "getHealth" }, // 4241171304
		{ &Z_Construct_UFunction_APlayerShip_getLevelValue, "getLevelValue" }, // 668228188
		{ &Z_Construct_UFunction_APlayerShip_getLives, "getLives" }, // 1413921211
		{ &Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun1, "getNumbersBulletsGun1" }, // 1753524916
		{ &Z_Construct_UFunction_APlayerShip_getNumbersBulletsGun2, "getNumbersBulletsGun2" }, // 4172223480
		{ &Z_Construct_UFunction_APlayerShip_getNumbersLaserBullets, "getNumbersLaserBullets" }, // 597202226
		{ &Z_Construct_UFunction_APlayerShip_getNumbersMissileBullets, "getNumbersMissileBullets" }, // 398393839
		{ &Z_Construct_UFunction_APlayerShip_getScoreValue, "getScoreValue" }, // 1826983691
		{ &Z_Construct_UFunction_APlayerShip_setScoreValue, "setScoreValue" }, // 2841087828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerShip.h" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaulSceneRoot_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "Comment", "// Propiedades de la nave jugador\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "Propiedades de la nave jugador" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaulSceneRoot = { "DefaulSceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, DefaulSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaulSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaulSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipMesh_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Propiedades de la nave jugador\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "Propiedades de la nave jugador" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipMesh = { "ShipMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ShipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosion_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// la malla o cascara\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "la malla o cascara" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosion = { "ShipExplosion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ShipExplosion), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipParticle_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// para la explosion\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "para la explosion" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipParticle = { "ShipParticle", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ShipParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipCollision_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// para el propulsor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "para el propulsor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipCollision = { "ShipCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ShipCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_ExplosionSoundShip_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// para colisiones\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "para colisiones" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_ExplosionSoundShip = { "ExplosionSoundShip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, ExplosionSoundShip), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_ExplosionSoundShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_ExplosionSoundShip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet1_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// sonido de explosion\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "sonido de explosion" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet1 = { "SoundBullet1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, SoundBullet1), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet2_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// sonido de disparo bala 1\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "sonido de disparo bala 1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet2 = { "SoundBullet2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, SoundBullet2), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundLaser_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// sonido de disparo bala 2\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "sonido de disparo bala 2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundLaser = { "SoundLaser", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, SoundLaser), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundLaser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundLaser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundMissile_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// sonido de disparo laser\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "sonido de disparo laser" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundMissile = { "SoundMissile", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, SoundMissile), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundMissile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundMissile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundSelectWeapon_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// sonido de disparo misil\n" },
		{ "ModuleRelativePath", "PlayerShip.h" },
		{ "ToolTip", "sonido de disparo misil" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundSelectWeapon = { "SoundSelectWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, SoundSelectWeapon), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundSelectWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundSelectWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthWidgetComp_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthWidgetComp = { "HealthWidgetComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerShip, HealthWidgetComp), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthWidgetComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthWidgetComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaulSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipExplosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ShipCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_ExplosionSoundShip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundBullet2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundLaser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundMissile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_SoundSelectWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_HealthWidgetComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerShip_Statics::ClassParams = {
		&APlayerShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerShip, 959228298);
	template<> STARFIGHTER_API UClass* StaticClass<APlayerShip>()
	{
		return APlayerShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerShip(Z_Construct_UClass_APlayerShip, &APlayerShip::StaticClass, TEXT("/Script/StarFighter"), TEXT("APlayerShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
