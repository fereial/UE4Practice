// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoor.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "CoreMinimal.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	MyActor = GetOwner();

}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



	
	if (GetMassOnTrriger() > MassToOpenDoor )
	{
		OpenDor();
		OpenTime = GetWorld()->GetTimeSeconds();
	}
	

	if (GetWorld()->GetTimeSeconds() - OpenTime > TimeToClooseDoor) 
	{
		ClooseDoor();
	}
	
}

void UOpenDoor::OpenDor()
{
	MyActor->SetActorRotation(FRotator(0.f, OpenAngle, 0.f));
}

void UOpenDoor::ClooseDoor()
{
	MyActor->SetActorRotation(FRotator(0.f, 0.f, 0.f));
}

float UOpenDoor::GetMassOnTrriger()
{
	float Mass = 0.f;
	TArray<AActor*> ActorInArea;
	PresssurePlate->GetOverlappingActors(ActorInArea);

	for (const AActor* x : ActorInArea)
	{
		if ( x != nullptr)
		{
		
			Mass += x->FindComponentByClass<UPrimitiveComponent>()->GetMass();
		}

	}

	return Mass;
}



