// Angel aka marley-EE is the man!

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "testcomp.generated.h"

UCLASS()
class BUILDINGESCAPE_API Atestcomp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Atestcomp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
