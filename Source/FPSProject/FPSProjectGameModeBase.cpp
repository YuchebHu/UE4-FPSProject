// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectGameModeBase.h"
#include "Engine/Engine.h"

void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello world, this is FPSGameMode!"));
	}
}