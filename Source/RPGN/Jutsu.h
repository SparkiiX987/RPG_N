#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChakraNature.h"
#include "Mudra.h"
#include "Jutsu.generated.h"

UCLASS()
class UJutsu : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Jutsu variables")
	EChakraNature chakraNature;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Jutsu variables")
	FName jutsuName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Jutsu variables")
	TArray<EMudra> mudraForJutsu;
};
