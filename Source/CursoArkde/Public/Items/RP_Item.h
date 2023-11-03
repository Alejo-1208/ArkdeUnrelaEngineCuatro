// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RP_Item.generated.h"


class USphereComponent;

UCLASS()
class CURSOARKDE_API ARP_Item : public AActor
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* MainColliderComponent;


public:	
	// Sets default values for this actor's properties
	ARP_Item();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Pickup();

	//Se Declara en el blueprint, en el .CPP
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Item")
	void BP_PickUp();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
