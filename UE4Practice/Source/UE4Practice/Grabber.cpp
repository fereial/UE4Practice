// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Public/CollisionQueryParams.h"
#include "Runtime/Engine/Classes/Engine/World.h"


// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	InitialazeVariables();
	
	InputInitalzer();
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



}

void UGrabber::Grab()
{
	AActor *ActorHit = FindTargetActor();
	if (ActorHit != nullptr)
	{
		
	}

	
}

void UGrabber::Reasle()
{
	UE_LOG(LogTemp, Warning, TEXT("Realse"));
}

void UGrabber::InitialazeVariables()
{
	PhysicHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

}

void UGrabber::InputInitalzer()
{

	if (InputComponent != nullptr)
	{
		InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Reasle);
	}

}

 AActor* UGrabber::FindTargetActor()
{
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		ViewPortLocation,
		ViewPortRatation
	);

	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());

	FVector DebugRay = ViewPortLocation + ViewPortRatation.Vector() * RayLength;

	FHitResult Hit;

	GetWorld()->LineTraceSingleByObjectType(
		Hit,
		ViewPortLocation,
		DebugRay,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);
	return Hit.GetActor();
}

