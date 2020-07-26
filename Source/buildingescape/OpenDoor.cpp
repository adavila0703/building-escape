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

	FVector actorlocation = GetOwner()->GetActorLocation();
	float objectz = actorlocation.Z + 225;
	float objecty = actorlocation.Y;
	float objectx = actorlocation.X;
	FVector newactorlocation = FVector(objectx, objecty, objectz);
	
	GetOwner()->SetActorLocation(newactorlocation);

}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	
}

