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
// End Cross Module References
	void ABaller::StaticRegisterNativesABaller()
	{
	}
	UClass* Z_Construct_UClass_ABaller_NoRegister()
	{
		return ABaller::StaticClass();
	}
	struct Z_Construct_UClass_ABaller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PAINT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Baller.h" },
		{ "ModuleRelativePath", "Baller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaller_Statics::ClassParams = {
		&ABaller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ABaller, 486513250);
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
