// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAINT_Baller_generated_h
#error "Baller.generated.h already included, missing '#pragma once' in Baller.h"
#endif
#define PAINT_Baller_generated_h

#define PAINT_Source_PAINT_Baller_h_17_SPARSE_DATA
#define PAINT_Source_PAINT_Baller_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAiming);


#define PAINT_Source_PAINT_Baller_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAiming);


#define PAINT_Source_PAINT_Baller_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaller(); \
	friend struct Z_Construct_UClass_ABaller_Statics; \
public: \
	DECLARE_CLASS(ABaller, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PAINT"), NO_API) \
	DECLARE_SERIALIZER(ABaller)


#define PAINT_Source_PAINT_Baller_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaller(); \
	friend struct Z_Construct_UClass_ABaller_Statics; \
public: \
	DECLARE_CLASS(ABaller, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PAINT"), NO_API) \
	DECLARE_SERIALIZER(ABaller)


#define PAINT_Source_PAINT_Baller_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaller(ABaller&&); \
	NO_API ABaller(const ABaller&); \
public:


#define PAINT_Source_PAINT_Baller_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaller(ABaller&&); \
	NO_API ABaller(const ABaller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaller)


#define PAINT_Source_PAINT_Baller_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABaller, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABaller, Camera); } \
	FORCEINLINE static uint32 __PPO__RotationRate() { return STRUCT_OFFSET(ABaller, RotationRate); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(ABaller, GunClass); } \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(ABaller, Gun); }


#define PAINT_Source_PAINT_Baller_h_14_PROLOG
#define PAINT_Source_PAINT_Baller_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAINT_Source_PAINT_Baller_h_17_PRIVATE_PROPERTY_OFFSET \
	PAINT_Source_PAINT_Baller_h_17_SPARSE_DATA \
	PAINT_Source_PAINT_Baller_h_17_RPC_WRAPPERS \
	PAINT_Source_PAINT_Baller_h_17_INCLASS \
	PAINT_Source_PAINT_Baller_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAINT_Source_PAINT_Baller_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAINT_Source_PAINT_Baller_h_17_PRIVATE_PROPERTY_OFFSET \
	PAINT_Source_PAINT_Baller_h_17_SPARSE_DATA \
	PAINT_Source_PAINT_Baller_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAINT_Source_PAINT_Baller_h_17_INCLASS_NO_PURE_DECLS \
	PAINT_Source_PAINT_Baller_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAINT_API UClass* StaticClass<class ABaller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAINT_Source_PAINT_Baller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
