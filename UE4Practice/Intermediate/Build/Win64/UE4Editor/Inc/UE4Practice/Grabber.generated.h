// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4PRACTICE_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define UE4PRACTICE_Grabber_generated_h

#define UE4Practice_Source_UE4Practice_Grabber_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReasle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reasle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Grab(); \
		P_NATIVE_END; \
	}


#define UE4Practice_Source_UE4Practice_Grabber_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReasle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reasle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Grab(); \
		P_NATIVE_END; \
	}


#define UE4Practice_Source_UE4Practice_Grabber_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Practice"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define UE4Practice_Source_UE4Practice_Grabber_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Practice"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define UE4Practice_Source_UE4Practice_Grabber_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define UE4Practice_Source_UE4Practice_Grabber_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define UE4Practice_Source_UE4Practice_Grabber_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RayLength() { return STRUCT_OFFSET(UGrabber, RayLength); } \
	FORCEINLINE static uint32 __PPO__ViewPortLocation() { return STRUCT_OFFSET(UGrabber, ViewPortLocation); } \
	FORCEINLINE static uint32 __PPO__ViewPortRatation() { return STRUCT_OFFSET(UGrabber, ViewPortRatation); }


#define UE4Practice_Source_UE4Practice_Grabber_h_13_PROLOG
#define UE4Practice_Source_UE4Practice_Grabber_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Practice_Source_UE4Practice_Grabber_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4Practice_Source_UE4Practice_Grabber_h_16_RPC_WRAPPERS \
	UE4Practice_Source_UE4Practice_Grabber_h_16_INCLASS \
	UE4Practice_Source_UE4Practice_Grabber_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Practice_Source_UE4Practice_Grabber_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Practice_Source_UE4Practice_Grabber_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4Practice_Source_UE4Practice_Grabber_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Practice_Source_UE4Practice_Grabber_h_16_INCLASS_NO_PURE_DECLS \
	UE4Practice_Source_UE4Practice_Grabber_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4PRACTICE_API UClass* StaticClass<class UGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Practice_Source_UE4Practice_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
