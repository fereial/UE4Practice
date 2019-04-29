// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTranfosm.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UMyTranfosm::UMyTranfosm()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMyTranfosm::BeginPlay()
{
	Super::BeginPlay();
	FString MyName = GetOwner()->GetName();
	FString MYPos = GetOwner()->GetTransform().GetLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s Print Tranfrom %s" ),*MyName , *MYPos );
	
}


// Called every frame
void UMyTranfosm::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

