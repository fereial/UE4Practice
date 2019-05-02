// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Practice/OpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor() {}
// Cross Module References
	UE4PRACTICE_API UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	UE4PRACTICE_API UClass* Z_Construct_UClass_UOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UE4Practice();
	UE4PRACTICE_API UFunction* Z_Construct_UFunction_UOpenDoor_ClooseDoor();
	UE4PRACTICE_API UFunction* Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger();
	UE4PRACTICE_API UFunction* Z_Construct_UFunction_UOpenDoor_OpenDor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
		UClass* Class = UOpenDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClooseDoor", &UOpenDoor::execClooseDoor },
			{ "GetMassOnTrriger", &UOpenDoor::execGetMassOnTrriger },
			{ "OpenDor", &UOpenDoor::execOpenDor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenDoor_ClooseDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenDoor_ClooseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenDoor_ClooseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenDoor, nullptr, "ClooseDoor", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenDoor_ClooseDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOpenDoor_ClooseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenDoor_ClooseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenDoor_ClooseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics
	{
		struct OpenDoor_eventGetMassOnTrriger_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenDoor_eventGetMassOnTrriger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenDoor, nullptr, "GetMassOnTrriger", sizeof(OpenDoor_eventGetMassOnTrriger_Parms), Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenDoor_OpenDor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenDoor_OpenDor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenDoor_OpenDor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenDoor, nullptr, "OpenDor", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenDoor_OpenDor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOpenDoor_OpenDor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenDoor_OpenDor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenDoor_OpenDor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	struct Z_Construct_UClass_UOpenDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresssurePlateActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresssurePlateActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresssurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresssurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassToOpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassToOpenDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToClooseDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToClooseDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDoorOpen_MetaData[];
#endif
		static void NewProp_bIsDoorOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDoorOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Practice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenDoor_ClooseDoor, "ClooseDoor" }, // 458358134
		{ &Z_Construct_UFunction_UOpenDoor_GetMassOnTrriger, "GetMassOnTrriger" }, // 3108494745
		{ &Z_Construct_UFunction_UOpenDoor_OpenDor, "OpenDor" }, // 3817988015
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OpenDoor.h" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_MyActor_MetaData[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_MyActor = { "MyActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_MyActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_MyActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlateActor_MetaData[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlateActor = { "PresssurePlateActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, PresssurePlateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlateActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlateActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlate_MetaData[] = {
		{ "Category", "OpenDoor" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlate = { "PresssurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, PresssurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor_MetaData[] = {
		{ "Category", "OpenDoor" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor = { "MassToOpenDoor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, MassToOpenDoor), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_TimeToClooseDoor_MetaData[] = {
		{ "Category", "OpenDoor" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_TimeToClooseDoor = { "TimeToClooseDoor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, TimeToClooseDoor), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TimeToClooseDoor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_TimeToClooseDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_bIsDoorOpen_MetaData[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	void Z_Construct_UClass_UOpenDoor_Statics::NewProp_bIsDoorOpen_SetBit(void* Obj)
	{
		((UOpenDoor*)Obj)->bIsDoorOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_bIsDoorOpen = { "bIsDoorOpen", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenDoor), &Z_Construct_UClass_UOpenDoor_Statics::NewProp_bIsDoorOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_bIsDoorOpen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_bIsDoorOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenTime_MetaData[] = {
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenTime = { "OpenTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, OpenTime), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle_MetaData[] = {
		{ "Category", "OpenDoor" },
		{ "ModuleRelativePath", "OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle = { "OpenAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenDoor, OpenAngle), METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_MyActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlateActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_PresssurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_MassToOpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_TimeToClooseDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_bIsDoorOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenDoor_Statics::NewProp_OpenAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenDoor_Statics::ClassParams = {
		&UOpenDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenDoor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOpenDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 1535028011);
	template<> UE4PRACTICE_API UClass* StaticClass<UOpenDoor>()
	{
		return UOpenDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/UE4Practice"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
