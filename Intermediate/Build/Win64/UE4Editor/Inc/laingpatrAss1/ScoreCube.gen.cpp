// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "laingpatrAss1/ScoreCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreCube() {}
// Cross Module References
	LAINGPATRASS1_API UClass* Z_Construct_UClass_AScoreCube_NoRegister();
	LAINGPATRASS1_API UClass* Z_Construct_UClass_AScoreCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_laingpatrAss1();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AScoreCube::StaticRegisterNativesAScoreCube()
	{
	}
	UClass* Z_Construct_UClass_AScoreCube_NoRegister()
	{
		return AScoreCube::StaticClass();
	}
	struct Z_Construct_UClass_AScoreCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScoreCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_laingpatrAss1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScoreCube.h" },
		{ "ModuleRelativePath", "ScoreCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoreCube_Statics::NewProp_VisualMesh_MetaData[] = {
		{ "Category", "ScoreCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoreCube_Statics::NewProp_VisualMesh = { "VisualMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScoreCube, VisualMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScoreCube_Statics::NewProp_VisualMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCube_Statics::NewProp_VisualMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoreCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreCube_Statics::NewProp_VisualMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScoreCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScoreCube_Statics::ClassParams = {
		&AScoreCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScoreCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScoreCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScoreCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScoreCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScoreCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScoreCube, 2235332811);
	template<> LAINGPATRASS1_API UClass* StaticClass<AScoreCube>()
	{
		return AScoreCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScoreCube(Z_Construct_UClass_AScoreCube, &AScoreCube::StaticClass, TEXT("/Script/laingpatrAss1"), TEXT("AScoreCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
