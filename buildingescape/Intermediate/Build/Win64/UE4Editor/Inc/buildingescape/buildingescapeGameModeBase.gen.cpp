// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "buildingescape/buildingescapeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebuildingescapeGameModeBase() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AbuildingescapeGameModeBase_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AbuildingescapeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_buildingescape();
// End Cross Module References
	void AbuildingescapeGameModeBase::StaticRegisterNativesAbuildingescapeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AbuildingescapeGameModeBase_NoRegister()
	{
		return AbuildingescapeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AbuildingescapeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbuildingescapeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_buildingescape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbuildingescapeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "buildingescapeGameModeBase.h" },
		{ "ModuleRelativePath", "buildingescapeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbuildingescapeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbuildingescapeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbuildingescapeGameModeBase_Statics::ClassParams = {
		&AbuildingescapeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AbuildingescapeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbuildingescapeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbuildingescapeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbuildingescapeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AbuildingescapeGameModeBase, 87291331);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AbuildingescapeGameModeBase>()
	{
		return AbuildingescapeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbuildingescapeGameModeBase(Z_Construct_UClass_AbuildingescapeGameModeBase, &AbuildingescapeGameModeBase::StaticClass, TEXT("/Script/buildingescape"), TEXT("AbuildingescapeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbuildingescapeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
