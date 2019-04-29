// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4PRACTICE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define UE4PRACTICE_OpenDoor_generated_h

#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClooseDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClooseDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDor(); \
		P_NATIVE_END; \
	}


#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClooseDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClooseDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDor(); \
		P_NATIVE_END; \
	}


#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Practice"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Practice"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UOpenDoor, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__OpenTime() { return STRUCT_OFFSET(UOpenDoor, OpenTime); } \
	FORCEINLINE static uint32 __PPO__bIsDoorOpen() { return STRUCT_OFFSET(UOpenDoor, bIsDoorOpen); } \
	FORCEINLINE static uint32 __PPO__TimeToClooseDoor() { return STRUCT_OFFSET(UOpenDoor, TimeToClooseDoor); } \
	FORCEINLINE static uint32 __PPO__PresssurePlate() { return STRUCT_OFFSET(UOpenDoor, PresssurePlate); } \
	FORCEINLINE static uint32 __PPO__PresssurePlateActor() { return STRUCT_OFFSET(UOpenDoor, PresssurePlateActor); } \
	FORCEINLINE static uint32 __PPO__MyActor() { return STRUCT_OFFSET(UOpenDoor, MyActor); }


#define UE4Practice_Source_UE4Practice_OpenDoor_h_10_PROLOG
#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Practice_Source_UE4Practice_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4Practice_Source_UE4Practice_OpenDoor_h_13_RPC_WRAPPERS \
	UE4Practice_Source_UE4Practice_OpenDoor_h_13_INCLASS \
	UE4Practice_Source_UE4Practice_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Practice_Source_UE4Practice_OpenDoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Practice_Source_UE4Practice_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4Practice_Source_UE4Practice_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Practice_Source_UE4Practice_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
	UE4Practice_Source_UE4Practice_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4PRACTICE_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Practice_Source_UE4Practice_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
