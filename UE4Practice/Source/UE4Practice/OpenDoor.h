// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4PRACTICE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	float OpenAngle = -90.0f;

	UPROPERTY()
	float OpenTime = 0.f;

	UPROPERTY()
	bool bIsDoorOpen = false;

	UPROPERTY(EditAnywhere)
	float TimeToClooseDoor = 5.f;
	
	UPROPERTY(EditAnywhere)
	ATriggerVolume *PresssurePlate;

	UPROPERTY()
	AActor *PresssurePlateActor;
	
	UPROPERTY()
	AActor *MyActor;

	UFUNCTION()
	void OpenDor();

	UFUNCTION()
	void ClooseDoor();
};
