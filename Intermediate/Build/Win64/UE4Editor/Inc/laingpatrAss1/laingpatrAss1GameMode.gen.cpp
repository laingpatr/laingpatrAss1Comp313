// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "laingpatrAss1/laingpatrAss1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelaingpatrAss1GameMode() {}
// Cross Module References
	LAINGPATRASS1_API UClass* Z_Construct_UClass_AlaingpatrAss1GameMode_NoRegister();
	LAINGPATRASS1_API UClass* Z_Construct_UClass_AlaingpatrAss1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_laingpatrAss1();
// End Cross Module References
	void AlaingpatrAss1GameMode::StaticRegisterNativesAlaingpatrAss1GameMode()
	{
	}
	UClass* Z_Construct_UClass_AlaingpatrAss1GameMode_NoRegister()
	{
		return AlaingpatrAss1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AlaingpatrAss1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AlaingpatrAss1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_laingpatrAss1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AlaingpatrAss1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "laingpatrAss1GameMode.h" },
		{ "ModuleRelativePath", "laingpatrAss1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AlaingpatrAss1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AlaingpatrAss1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AlaingpatrAss1GameMode_Statics::ClassParams = {
		&AlaingpatrAss1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AlaingpatrAss1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AlaingpatrAss1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AlaingpatrAss1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AlaingpatrAss1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AlaingpatrAss1GameMode, 4273946192);
	template<> LAINGPATRASS1_API UClass* StaticClass<AlaingpatrAss1GameMode>()
	{
		return AlaingpatrAss1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AlaingpatrAss1GameMode(Z_Construct_UClass_AlaingpatrAss1GameMode, &AlaingpatrAss1GameMode::StaticClass, TEXT("/Script/laingpatrAss1"), TEXT("AlaingpatrAss1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AlaingpatrAss1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
