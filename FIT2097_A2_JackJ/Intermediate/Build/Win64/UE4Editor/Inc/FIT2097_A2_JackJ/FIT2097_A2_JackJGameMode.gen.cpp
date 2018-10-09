// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FIT2097_A2_JackJGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFIT2097_A2_JackJGameMode() {}
// Cross Module References
	FIT2097_A2_JACKJ_API UClass* Z_Construct_UClass_AFIT2097_A2_JackJGameMode_NoRegister();
	FIT2097_A2_JACKJ_API UClass* Z_Construct_UClass_AFIT2097_A2_JackJGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FIT2097_A2_JackJ();
// End Cross Module References
	void AFIT2097_A2_JackJGameMode::StaticRegisterNativesAFIT2097_A2_JackJGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFIT2097_A2_JackJGameMode_NoRegister()
	{
		return AFIT2097_A2_JackJGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFIT2097_A2_JackJGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FIT2097_A2_JackJ,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FIT2097_A2_JackJGameMode.h" },
				{ "ModuleRelativePath", "FIT2097_A2_JackJGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFIT2097_A2_JackJGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFIT2097_A2_JackJGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
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
	IMPLEMENT_CLASS(AFIT2097_A2_JackJGameMode, 3300840544);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFIT2097_A2_JackJGameMode(Z_Construct_UClass_AFIT2097_A2_JackJGameMode, &AFIT2097_A2_JackJGameMode::StaticClass, TEXT("/Script/FIT2097_A2_JackJ"), TEXT("AFIT2097_A2_JackJGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFIT2097_A2_JackJGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
