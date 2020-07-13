// Angel aka marley-EE is the man!

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SomeCrazyBox.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API USomeCrazyBox : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USomeCrazyBox();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
