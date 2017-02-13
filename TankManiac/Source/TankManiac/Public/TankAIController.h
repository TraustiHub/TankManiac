// Copyright TRUSTI.no - Stefan Trausti Arnason.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANKMANIAC_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	// At what radius will the AI stop moving towards the player (in cm?)
	float AcceptanceRadius = 3000;

};
