// Angel aka marley-EE is the man!


#include "LocateActor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
ULocateActor::ULocateActor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULocateActor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULocateActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

