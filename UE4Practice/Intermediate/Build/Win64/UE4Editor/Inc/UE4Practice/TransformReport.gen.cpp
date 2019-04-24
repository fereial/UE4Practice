// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Practice/TransformReport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformReport() {}
// Cross Module References
	UE4PRACTICE_API UClass* Z_Construct_UClass_UTransformReport_NoRegister();
	UE4PRACTICE_API UClass* Z_Construct_UClass_UTransformReport();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UE4Practice();
// End Cross Module References
	void UTransformReport::StaticRegisterNativesUTransformReport()
	{
	}
	UClass* Z_Construct_UClass_UTransformReport_NoRegister()
	{
		return UTransformReport::StaticClass();
	}
	struct Z_Construct_UClass_UTransformReport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformReport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Practice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformReport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TransformReport.h" },
		{ "ModuleRelativePath", "TransformReport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformReport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformReport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTransformReport_Statics::ClassParams = {
		&UTransformReport::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformReport_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTransformReport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformReport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTransformReport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTransformReport, 326241420);
	template<> UE4PRACTICE_API UClass* StaticClass<UTransformReport>()
	{
		return UTransformReport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTransformReport(Z_Construct_UClass_UTransformReport, &UTransformReport::StaticClass, TEXT("/Script/UE4Practice"), TEXT("UTransformReport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformReport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
