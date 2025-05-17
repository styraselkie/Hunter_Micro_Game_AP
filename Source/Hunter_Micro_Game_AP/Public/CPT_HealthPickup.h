// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPT_HealthPickup.generated.h"

class UStaticMeshComponent;
class URotatingMovementComponent;
class USphereComponent;
class UNiagaraSystem;
class USoundBase;

UCLASS()
class HUNTER_MICRO_GAME_AP_API ACPT_HealthPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPT_HealthPickup();
	
	UFUNCTION()
	void OnBeginOverlapComponentEvent(
		UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult
	);
protected:

	UPROPERTY(EditDefaultsOnly, Category = "Health Pick Up")
	TObjectPtr<UStaticMeshComponent> MeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Health Pick Up")
	TObjectPtr<URotatingMovementComponent> RotatingMovementComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Health Pick Up")
	TObjectPtr<USphereComponent> ColliderComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Health Pick Up")
	TObjectPtr<UNiagaraSystem> OnPickupEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Health Pick Up")
	TObjectPtr<USoundBase> PickSound;

	UPROPERTY(EditDefaultsOnly, Category = "Health Pick Up")
	float VolumeMultiplier { 0.5 };

	UPROPERTY(EditDefaultsOnly, Category = "Health Pick Up")
	float PickEffectSpawnOffset { 90 };

};
