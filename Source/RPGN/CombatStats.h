#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombatStats.generated.h"

USTRUCT(BlueprintType)
struct FCombatStats
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MaxHealth = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float CurrentHealth = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Speed = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Force = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Reflexes = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Chakra = 50.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MaxChakra = 50.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float ChakraControle = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Ninjutsu = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Taijutsu = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Genjutsu = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Kenjutsu = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Shurikenjutsu = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float Fuinjutsu = 1.f;
};
