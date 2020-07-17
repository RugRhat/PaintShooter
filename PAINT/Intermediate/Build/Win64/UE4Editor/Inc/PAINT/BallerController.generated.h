// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAINT_BallerController_generated_h
#error "BallerController.generated.h already included, missing '#pragma once' in BallerController.h"
#endif
#define PAINT_BallerController_generated_h

#define PAINT_Source_PAINT_BallerController_h_15_SPARSE_DATA
#define PAINT_Source_PAINT_BallerController_h_15_RPC_WRAPPERS
#define PAINT_Source_PAINT_BallerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PAINT_Source_PAINT_BallerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallerController(); \
	friend struct Z_Construct_UClass_ABallerController_Statics; \
public: \
	DECLARE_CLASS(ABallerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PAINT"), NO_API) \
	DECLARE_SERIALIZER(ABallerController)


#define PAINT_Source_PAINT_BallerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABallerController(); \
	friend struct Z_Construct_UClass_ABallerController_Statics; \
public: \
	DECLARE_CLASS(ABallerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PAINT"), NO_API) \
	DECLARE_SERIALIZER(ABallerController)


#define PAINT_Source_PAINT_BallerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallerController(ABallerController&&); \
	NO_API ABallerController(const ABallerController&); \
public:


#define PAINT_Source_PAINT_BallerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallerController(ABallerController&&); \
	NO_API ABallerController(const ABallerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallerController)


#define PAINT_Source_PAINT_BallerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(ABallerController, HUDClass); }


#define PAINT_Source_PAINT_BallerController_h_12_PROLOG
#define PAINT_Source_PAINT_BallerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAINT_Source_PAINT_BallerController_h_15_PRIVATE_PROPERTY_OFFSET \
	PAINT_Source_PAINT_BallerController_h_15_SPARSE_DATA \
	PAINT_Source_PAINT_BallerController_h_15_RPC_WRAPPERS \
	PAINT_Source_PAINT_BallerController_h_15_INCLASS \
	PAINT_Source_PAINT_BallerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAINT_Source_PAINT_BallerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAINT_Source_PAINT_BallerController_h_15_PRIVATE_PROPERTY_OFFSET \
	PAINT_Source_PAINT_BallerController_h_15_SPARSE_DATA \
	PAINT_Source_PAINT_BallerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAINT_Source_PAINT_BallerController_h_15_INCLASS_NO_PURE_DECLS \
	PAINT_Source_PAINT_BallerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAINT_API UClass* StaticClass<class ABallerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAINT_Source_PAINT_BallerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
