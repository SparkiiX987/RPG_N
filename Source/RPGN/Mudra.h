#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mudra.generated.h"

UENUM(BlueprintType)
enum class EMudra : uint8
{
	Saru	UMETA(DisplayName = "Saru"),
	Tatsu   UMETA(DisplayName = "Tatsu"),
	Ne		UMETA(DisplayName = "Ne"),
	Tori	UMETA(DisplayName = "Tori"),
	Mi		UMETA(DisplayName = "Mi"),
	Ushi	UMETA(DisplayName = "Ushi"),
	Inu		UMETA(DisplayName = "Inu"),
	Uma		UMETA(DisplayName = "Uma"),
	Tora	UMETA(DisplayName = "Tora"),
	I		UMETA(DisplayName = "I"),
	Hitsuji UMETA(DisplayName = "Hitsuji"),
	U		UMETA(DisplayName = "U"),
};
