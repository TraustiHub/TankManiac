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
	
protected:
	// At what radius will the AI stop moving towards the player (in cm?)
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float AcceptanceRadius = 8000;

private:
	virtual void BeginPlay() override;

	virtual void SetPawn(APawn* InPawn) override;

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void OnPossessedTankDeath();
};
