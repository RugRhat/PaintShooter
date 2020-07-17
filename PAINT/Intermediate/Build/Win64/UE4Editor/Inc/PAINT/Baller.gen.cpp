// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PAINT/Baller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaller() {}
// Cross Module References
	PAINT_API UClass* Z_Construct_UClass_ABaller_NoRegister();
	PAINT_API UClass* Z_Construct_UClass_ABaller();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PAINT();
	PAINT_API UClass* Z_Construct_UClass_AGun_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaller::execIsProne)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsProne();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaller::execIsCrouched)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrouched();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaller::execIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaller::execIsEquiped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquiped();
		P_NATIVE_END;
	}
	void ABaller::StaticRegisterNativesABaller()
	{
		UClass* Class = ABaller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAiming", &ABaller::execIsAiming },
			{ "IsCrouched", &ABaller::execIsCrouched },
			{ "IsEquiped", &ABaller::execIsEquiped },
			{ "IsProne", &ABaller::execIsProne },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaller_IsAiming_Statics
	{
		struct Baller_eventIsAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaller_IsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Baller_eventIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaller_IsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Baller_eventIsAiming_Parms), &Z_Construct_UFunction_ABaller_IsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaller_IsAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaller_IsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaller_IsAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gunplay" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaller_IsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaller, nullptr, "IsAiming", nullptr, nullptr, sizeof(Baller_eventIsAiming_Parms), Z_Construct_UFunction_ABaller_IsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaller_IsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaller_IsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaller_IsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaller_IsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaller_IsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaller_IsCrouched_Statics
	{
		struct Baller_eventIsCrouched_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaller_IsCrouched_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Baller_eventIsCrouched_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaller_IsCrouched_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Baller_eventIsCrouched_Parms), &Z_Construct_UFunction_ABaller_IsCrouched_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaller_IsCrouched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaller_IsCrouched_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaller_IsCrouched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaller_IsCrouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaller, nullptr, "IsCrouched", nullptr, nullptr, sizeof(Baller_eventIsCrouched_Parms), Z_Construct_UFunction_ABaller_IsCrouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaller_IsCrouched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaller_IsCrouched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaller_IsCrouched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaller_IsCrouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaller_IsCrouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaller_IsEquiped_Statics
	{
		struct Baller_eventIsEquiped_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaller_IsEquiped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Baller_eventIsEquiped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaller_IsEquiped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Baller_eventIsEquiped_Parms), &Z_Construct_UFunction_ABaller_IsEquiped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaller_IsEquiped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaller_IsEquiped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaller_IsEquiped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gunplay" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaller_IsEquiped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaller, nullptr, "IsEquiped", nullptr, nullptr, sizeof(Baller_eventIsEquiped_Parms), Z_Construct_UFunction_ABaller_IsEquiped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaller_IsEquiped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaller_IsEquiped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaller_IsEquiped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaller_IsEquiped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaller_IsEquiped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaller_IsProne_Statics
	{
		struct Baller_eventIsProne_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaller_IsProne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Baller_eventIsProne_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaller_IsProne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Baller_eventIsProne_Parms), &Z_Construct_UFunction_ABaller_IsProne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaller_IsProne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaller_IsProne_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaller_IsProne_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaller_IsProne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaller, nullptr, "IsProne", nullptr, nullptr, sizeof(Baller_eventIsProne_Parms), Z_Construct_UFunction_ABaller_IsProne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaller_IsProne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaller_IsProne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaller_IsProne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaller_IsProne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaller_IsProne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaller_NoRegister()
	{
		return ABaller::StaticClass();
	}
	struct Z_Construct_UClass_ABaller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GunClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PAINT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaller_IsAiming, "IsAiming" }, // 1440257433
		{ &Z_Construct_UFunction_ABaller_IsCrouched, "IsCrouched" }, // 907017505
		{ &Z_Construct_UFunction_ABaller_IsEquiped, "IsEquiped" }, // 2855746502
		{ &Z_Construct_UFunction_ABaller_IsProne, "IsProne" }, // 3632215359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Baller.h" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaller_Statics::NewProp_Gun_MetaData[] = {
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaller_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaller, Gun), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaller_Statics::NewProp_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaller_Statics::NewProp_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaller_Statics::NewProp_GunClass_MetaData[] = {
		{ "Category", "Baller" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaller_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaller, GunClass), Z_Construct_UClass_AGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaller_Statics::NewProp_GunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaller_Statics::NewProp_GunClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaller_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "Baller" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaller_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaller, RotationRate), METADATA_PARAMS(Z_Construct_UClass_ABaller_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaller_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaller_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Baller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaller_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaller, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaller_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaller_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaller_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Baller" },
		{ "Comment", "// void Quit();\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Baller.h" },
		{ "ToolTip", "void Quit();" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaller_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaller, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaller_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaller_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaller_Statics::NewProp_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaller_Statics::NewProp_GunClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaller_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaller_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaller_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaller_Statics::ClassParams = {
		&ABaller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaller_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaller, 1574935130);
	template<> PAINT_API UClass* StaticClass<ABaller>()
	{
		return ABaller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaller(Z_Construct_UClass_ABaller, &ABaller::StaticClass, TEXT("/Script/PAINT"), TEXT("ABaller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
