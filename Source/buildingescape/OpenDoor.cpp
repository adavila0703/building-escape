// Angel aka marley-EE is the man!


#include "OpenDoor.h"
#include "GameFramework/Actor.h"


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

	if (!DoorTrigger)
	{
		FString actorname = GetOwner()->GetName();
		UE_LOG(LogTemp, Error, TEXT("%s Doesn't have a trigger component attached!"), *actorname);
	}

}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (DoorTrigger && DoorTrigger->IsOverlappingActor(ActorThatOpens))
	{
		OpenDoor(DeltaTime);
	}
	if (DoorTrigger && DoorTrigger->IsOverlappingActor(ActorThatOpens) != true)
	{
		CloseDoor(DeltaTime);
	}
}

void UOpenDoor::OpenDoor(float DeltaTime)
{
	FVector actorlocation = GetOwner()->GetActorLocation();
	float objectz = targetz;
	float objecty = actorlocation.Y;
	float objectx = actorlocation.X;
	FVector newactorlocation = FVector(objectx, objecty, objectz);

	GetOwner()->SetActorLocation(FMath::Lerp(actorlocation, newactorlocation, DeltaTime * 1.5f));
}

void UOpenDoor::CloseDoor(float DeltaTime)
{
	FVector actorlocation = GetOwner()->GetActorLocation();
	float objectz = targetclose;
	float objecty = actorlocation.Y;
	float objectx = actorlocation.X;
	FVector newactorlocation = FVector(objectx, objecty, objectz);

	GetOwner()->SetActorLocation(FMath::Lerp(actorlocation, newactorlocation, DeltaTime * 1.5f));
}

