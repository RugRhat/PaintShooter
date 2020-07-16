// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PAINT/Gun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	PAINT_API UClass* Z_Construct_UClass_AGun_NoRegister();
	PAINT_API UClass* Z_Construct_UClass_AGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PAINT();
	PAINT_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AGun::StaticRegisterNativesAGun()
	{
	}
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	struct Z_Construct_UClass_AGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PAINT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Projectile_MetaData[] = {
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, Projectile), Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGun, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ProjectileSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
		&AGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGun, 455224626);
	template<> PAINT_API UClass* StaticClass<AGun>()
	{
		return AGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGun(Z_Construct_UClass_AGun, &AGun::StaticClass, TEXT("/Script/PAINT"), TEXT("AGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
