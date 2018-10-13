// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyKey() {}
// Cross Module References
	FIT2097_A2_JACKJ_API UClass* Z_Construct_UClass_AMyKey_NoRegister();
	FIT2097_A2_JACKJ_API UClass* Z_Construct_UClass_AMyKey();
	FIT2097_A2_JACKJ_API UClass* Z_Construct_UClass_AStaticReplicatingActor();
	UPackage* Z_Construct_UPackage__Script_FIT2097_A2_JackJ();
// End Cross Module References
	void AMyKey::StaticRegisterNativesAMyKey()
	{
	}
	UClass* Z_Construct_UClass_AMyKey_NoRegister()
	{
		return AMyKey::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AStaticReplicatingActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FIT2097_A2_JackJ,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input" },
				{ "IncludePath", "MyKey.h" },
				{ "ModuleRelativePath", "MyKey.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyKey>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyKey::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyKey, 703921041);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyKey(Z_Construct_UClass_AMyKey, &AMyKey::StaticClass, TEXT("/Script/FIT2097_A2_JackJ"), TEXT("AMyKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
