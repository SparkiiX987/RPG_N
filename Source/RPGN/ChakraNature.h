#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChakraNature.generated.h"

UENUM(BlueprintType)
enum class EChakraNature : uint8
{
	Katon	UMETA(DisplayName = "Katon"),
	Suiton  UMETA(DisplayName = "Suiton"),
	Doton   UMETA(DisplayName = "Doton"),
	Futon   UMETA(DisplayName = "Futon"),
	Raiton  UMETA(DisplayName = "Raiton")
};
