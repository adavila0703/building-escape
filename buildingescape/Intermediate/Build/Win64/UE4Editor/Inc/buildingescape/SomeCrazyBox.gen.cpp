// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "buildingescape/SomeCrazyBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSomeCrazyBox() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USomeCrazyBox_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USomeCrazyBox();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_buildingescape();
// End Cross Module References
	void USomeCrazyBox::StaticRegisterNativesUSomeCrazyBox()
	{
	}
	UClass* Z_Construct_UClass_USomeCrazyBox_NoRegister()
	{
		return USomeCrazyBox::StaticClass();
	}
	struct Z_Construct_UClass_USomeCrazyBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USomeCrazyBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_buildingescape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USomeCrazyBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SomeCrazyBox.h" },
		{ "ModuleRelativePath", "SomeCrazyBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USomeCrazyBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USomeCrazyBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USomeCrazyBox_Statics::ClassParams = {
		&USomeCrazyBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USomeCrazyBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USomeCrazyBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USomeCrazyBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USomeCrazyBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USomeCrazyBox, 1115871094);
	template<> BUILDINGESCAPE_API UClass* StaticClass<USomeCrazyBox>()
	{
		return USomeCrazyBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USomeCrazyBox(Z_Construct_UClass_USomeCrazyBox, &USomeCrazyBox::StaticClass, TEXT("/Script/buildingescape"), TEXT("USomeCrazyBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USomeCrazyBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
