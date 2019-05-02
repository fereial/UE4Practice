// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "GameFramework/Actor.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Public/CollisionQueryParams.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
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
	DebugRay = GetRaycastEnd();

	if (PhysicHandle->GrabbedComponent) 
	{
		PhysicHandle->SetTargetLocation(DebugRay);
	}

}

void UGrabber::Grab()
{
	FHitResult RayCastHit = ObjectToGrab();
	auto ComponentToGrab = RayCastHit.GetComponent();
	AActor *ActorHit = RayCastHit.GetActor();

	if (ActorHit != nullptr)
	{
		PhysicHandle->GrabComponent(
			ComponentToGrab,
			NAME_None,
			ComponentToGrab->GetOwner()->GetActorLocation(),
			true
		);
			
	}

	
}

void UGrabber::Reasle()
{
	PhysicHandle->ReleaseComponent();
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

FHitResult UGrabber::ObjectToGrab()
{


	FVector DebugRay = GetRaycastEnd();

	FHitResult Hit;

	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());

	GetWorld()->LineTraceSingleByObjectType(
		Hit,
		ViewPortLocation,
		DebugRay,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	return Hit;
}

FVector UGrabber::GetRaycastEnd()
{
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		ViewPortLocation,
		ViewPortRatation
	);

	return ViewPortLocation + ViewPortRatation.Vector() * RayLength;
}

