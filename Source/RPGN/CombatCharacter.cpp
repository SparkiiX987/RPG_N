#include "CombatCharacter.h"
#include "TimerManager.h"

ACombatCharacter::ACombatCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACombatCharacter::BeginPlay()
{
	Super::BeginPlay();
	StartActionTimer();
}

void ACombatCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACombatCharacter::StartActionTimer()
{
	float Delay = FMath::Max(0.1f, BaseActionDelay / FMath::Max(1.f, Stats.Speed));
	GetWorldTimerManager().SetTimer(ActionTimerHandle, this, &ACombatCharacter::OnReadyToAct, Delay, false);
}

void ACombatCharacter::OnReadyToAct()
{
	bCanAct = true;
}
