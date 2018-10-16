// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDoor() {}
// Cross Module References
	FIT2097_A2_JACKJ_API UClass* Z_Construct_UClass_AMyDoor_NoRegister();
	FIT2097_A2_JACKJ_API UClass* Z_Construct_UClass_AMyDoor();
	FIT2097_A2_JACKJ_API UClass* Z_Construct_UClass_AStaticReplicatingActor();
	UPackage* Z_Construct_UPackage__Script_FIT2097_A2_JackJ();
// End Cross Module References
	void AMyDoor::StaticRegisterNativesAMyDoor()
	{
	}
	UClass* Z_Construct_UClass_AMyDoor_NoRegister()
	{
		return AMyDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyDoor()
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
				{ "IncludePath", "MyDoor.h" },
				{ "ModuleRelativePath", "MyDoor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyDoor::StaticClass,
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
	IMPLEMENT_CLASS(AMyDoor, 422426251);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyDoor(Z_Construct_UClass_AMyDoor, &AMyDoor::StaticClass, TEXT("/Script/FIT2097_A2_JackJ"), TEXT("AMyDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
