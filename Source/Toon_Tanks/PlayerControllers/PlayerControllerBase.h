// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class TOON_TANKS_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:

	void SetPlayerEnabledState(bool SetPlayerEnabled);

};
