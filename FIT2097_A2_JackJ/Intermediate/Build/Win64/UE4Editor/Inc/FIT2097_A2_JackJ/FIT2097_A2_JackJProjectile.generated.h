// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIT2097_A2_JACKJ_FIT2097_A2_JackJProjectile_generated_h
#error "FIT2097_A2_JackJProjectile.generated.h already included, missing '#pragma once' in FIT2097_A2_JackJProjectile.h"
#endif
#define FIT2097_A2_JACKJ_FIT2097_A2_JackJProjectile_generated_h

#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFIT2097_A2_JackJProjectile(); \
	friend FIT2097_A2_JACKJ_API class UClass* Z_Construct_UClass_AFIT2097_A2_JackJProjectile(); \
public: \
	DECLARE_CLASS(AFIT2097_A2_JackJProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097_A2_JackJ"), NO_API) \
	DECLARE_SERIALIZER(AFIT2097_A2_JackJProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFIT2097_A2_JackJProjectile(); \
	friend FIT2097_A2_JACKJ_API class UClass* Z_Construct_UClass_AFIT2097_A2_JackJProjectile(); \
public: \
	DECLARE_CLASS(AFIT2097_A2_JackJProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FIT2097_A2_JackJ"), NO_API) \
	DECLARE_SERIALIZER(AFIT2097_A2_JackJProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFIT2097_A2_JackJProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFIT2097_A2_JackJProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFIT2097_A2_JackJProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFIT2097_A2_JackJProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFIT2097_A2_JackJProjectile(AFIT2097_A2_JackJProjectile&&); \
	NO_API AFIT2097_A2_JackJProjectile(const AFIT2097_A2_JackJProjectile&); \
public:


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFIT2097_A2_JackJProjectile(AFIT2097_A2_JackJProjectile&&); \
	NO_API AFIT2097_A2_JackJProjectile(const AFIT2097_A2_JackJProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFIT2097_A2_JackJProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFIT2097_A2_JackJProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFIT2097_A2_JackJProjectile)


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFIT2097_A2_JackJProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFIT2097_A2_JackJProjectile, ProjectileMovement); }


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_9_PROLOG
#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_RPC_WRAPPERS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_INCLASS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FIT2097_A2_JackJ_Source_FIT2097_A2_JackJ_FIT2097_A2_JackJProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
