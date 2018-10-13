// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FIT2097_A2_JACKJ_FIT2097_A2_JackJCharacter_generated_h
#error "FIT2097_A2_JackJCharacter.generated.h already included, missing '#pragma once' in FIT2097_A2_JackJCharacter.h"
#endif
#define FIT2097_A2_JACKJ_FIT2097_A2_JackJCharacter_generated_h

#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_RPC_WRAPPERS \
	virtual bool ServerDestroy_Validate(AActor* ); \
	virtual void ServerDestroy_Implementation(AActor* actor_to_destory); \
 \
	DECLARE_FUNCTION(execServerDestroy) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor_to_destory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerDestroy_Validate(Z_Param_actor_to_destory)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerDestroy_Validate")); \
			return; \
		} \
		P_THIS->ServerDestroy_Implementation(Z_Param_actor_to_destory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->MyRole(); \
		P_NATIVE_END; \
	}


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerDestroy_Validate(AActor* ); \
	virtual void ServerDestroy_Implementation(AActor* actor_to_destory); \
 \
	DECLARE_FUNCTION(execServerDestroy) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor_to_destory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerDestroy_Validate(Z_Param_actor_to_destory)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerDestroy_Validate")); \
			return; \
		} \
		P_THIS->ServerDestroy_Implementation(Z_Param_actor_to_destory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMyRole) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->MyRole(); \
		P_NATIVE_END; \
	}


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_EVENT_PARMS \
	struct FIT2097_A2_JackJCharacter_eventServerDestroy_Parms \
	{ \
		AActor* actor_to_destory; \
	};


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_CALLBACK_WRAPPERS
#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFIT2097_A2_JackJCharacter(); \
	friend FIT2097_A2_JACKJ_API class UClass* Z_Construct_UClass_AFIT2097_A2_JackJCharacter(); \
public: \
	DECLARE_CLASS(AFIT2097_A2_JackJCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097_A2_JackJ"), NO_API) \
	DECLARE_SERIALIZER(AFIT2097_A2_JackJCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFIT2097_A2_JackJCharacter(); \
	friend FIT2097_A2_JACKJ_API class UClass* Z_Construct_UClass_AFIT2097_A2_JackJCharacter(); \
public: \
	DECLARE_CLASS(AFIT2097_A2_JackJCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097_A2_JackJ"), NO_API) \
	DECLARE_SERIALIZER(AFIT2097_A2_JackJCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFIT2097_A2_JackJCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFIT2097_A2_JackJCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFIT2097_A2_JackJCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFIT2097_A2_JackJCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFIT2097_A2_JackJCharacter(AFIT2097_A2_JackJCharacter&&); \
	NO_API AFIT2097_A2_JackJCharacter(const AFIT2097_A2_JackJCharacter&); \
public:


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFIT2097_A2_JackJCharacter(AFIT2097_A2_JackJCharacter&&); \
	NO_API AFIT2097_A2_JackJCharacter(const AFIT2097_A2_JackJCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFIT2097_A2_JackJCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFIT2097_A2_JackJCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFIT2097_A2_JackJCharacter)


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFIT2097_A2_JackJCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFIT2097_A2_JackJCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFIT2097_A2_JackJCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFIT2097_A2_JackJCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFIT2097_A2_JackJCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFIT2097_A2_JackJCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFIT2097_A2_JackJCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFIT2097_A2_JackJCharacter, L_MotionController); }


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_11_PROLOG \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_EVENT_PARMS


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_RPC_WRAPPERS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_CALLBACK_WRAPPERS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_INCLASS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_CALLBACK_WRAPPERS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
