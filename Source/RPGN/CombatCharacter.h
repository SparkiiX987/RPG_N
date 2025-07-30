#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CombatStats.h"
#include "Jutsu.h"
#include "CombatCharacter.generated.h"

UCLASS()
class ACombatCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACombatCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	FCombatStats Stats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jutsu")
	TArray<UJutsu*> KnownJutsus;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	bool bCanAct = false;

	FTimerHandle ActionTimerHandle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat")
	float BaseActionDelay = 10.0f; 

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void StartActionTimer();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void OnReadyToAct();
};
