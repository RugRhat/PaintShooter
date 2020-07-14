// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PAINT/PAINTGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePAINTGameMode() {}
// Cross Module References
	PAINT_API UClass* Z_Construct_UClass_APAINTGameMode_NoRegister();
	PAINT_API UClass* Z_Construct_UClass_APAINTGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PAINT();
// End Cross Module References
	void APAINTGameMode::StaticRegisterNativesAPAINTGameMode()
	{
	}
	UClass* Z_Construct_UClass_APAINTGameMode_NoRegister()
	{
		return APAINTGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APAINTGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APAINTGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PAINT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APAINTGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PAINTGameMode.h" },
		{ "ModuleRelativePath", "PAINTGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APAINTGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APAINTGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APAINTGameMode_Statics::ClassParams = {
		&APAINTGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APAINTGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APAINTGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APAINTGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APAINTGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APAINTGameMode, 1413729133);
	template<> PAINT_API UClass* StaticClass<APAINTGameMode>()
	{
		return APAINTGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APAINTGameMode(Z_Construct_UClass_APAINTGameMode, &APAINTGameMode::StaticClass, TEXT("/Script/PAINT"), TEXT("APAINTGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APAINTGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
