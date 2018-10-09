// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIT2097_A2_JACKJ_StaticReplicatingActor_generated_h
#error "StaticReplicatingActor.generated.h already included, missing '#pragma once' in StaticReplicatingActor.h"
#endif
#define FIT2097_A2_JACKJ_StaticReplicatingActor_generated_h

#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_newState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_newState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStaticReplicatingActor(); \
	friend FIT2097_A2_JACKJ_API class UClass* Z_Construct_UClass_AStaticReplicatingActor(); \
public: \
	DECLARE_CLASS(AStaticReplicatingActor, AStaticMeshActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097_A2_JackJ"), NO_API) \
	DECLARE_SERIALIZER(AStaticReplicatingActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStaticReplicatingActor(); \
	friend FIT2097_A2_JACKJ_API class UClass* Z_Construct_UClass_AStaticReplicatingActor(); \
public: \
	DECLARE_CLASS(AStaticReplicatingActor, AStaticMeshActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097_A2_JackJ"), NO_API) \
	DECLARE_SERIALIZER(AStaticReplicatingActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStaticReplicatingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStaticReplicatingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticReplicatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticReplicatingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticReplicatingActor(AStaticReplicatingActor&&); \
	NO_API AStaticReplicatingActor(const AStaticReplicatingActor&); \
public:


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticReplicatingActor(AStaticReplicatingActor&&); \
	NO_API AStaticReplicatingActor(const AStaticReplicatingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticReplicatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticReplicatingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStaticReplicatingActor)


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(AStaticReplicatingActor, bIsActive); }


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_12_PROLOG
#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_RPC_WRAPPERS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_INCLASS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_INCLASS_NO_PURE_DECLS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_StaticReplicatingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
