// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/ActorComponent.h"
#include "Components/InputComponent.h"
#include "Grabber.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4PRACTICE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


private:


	UPROPERTY(EditAnywhere)
	float RayLength = 100.f;
	UPROPERTY()
	FVector ViewPortLocation;
	UPROPERTY()
	FRotator ViewPortRatation;

	UPhysicsHandleComponent * PhysicHandle = nullptr;

	UInputComponent * InputComponent = nullptr;

	UFUNCTION(BlueprintCallable)
	void Grab();

	UFUNCTION(BlueprintCallable)
	void Reasle();

	void InitialazeVariables();

	void InputInitalzer();

	FHitResult ObjectToGrab();

	FVector GetRaycastEnd();

	FVector DebugRay = FVector(0.f, 0.f, 0.f);

};
