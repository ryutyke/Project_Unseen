// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss/USEarthBoss.h"

AUSEarthBoss::AUSEarthBoss()
{
	static ConstructorHelpers::FClassFinder<AActor> BattleZoneBPClassRef(TEXT("/Script/Engine.Blueprint'/Game/Boss/BattleZoneWall.BattleZoneWall_C'"));
	if (BattleZoneBPClassRef.Class)
	{
		BattleZoneBPClass = BattleZoneBPClassRef.Class;
	}
}

void AUSEarthBoss::BeginPlay()
{
	Super::BeginPlay();
}

void AUSEarthBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AUSEarthBoss::LimitBattleZone()
{
	Super::LimitBattleZone();

	GetWorld()->SpawnActor<AActor>(BattleZoneBPClass, GetActorLocation(), FRotator::ZeroRotator);
}
