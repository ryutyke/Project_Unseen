// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/UnseenWeaponBase.h"

// Sets default values
AUnseenWeaponBase::AUnseenWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShootRate = 1.0f;
	MaxVerticalRecoil = 1.0f;
	MaxHorizontalRecoil = 1.0f;
	CurrentVerticalRecoil = MaxVerticalRecoil;
	CurrentHorizontalRecoil = 0.0f;
	HorizontalRecoilAmount = 0.0f;
	bIsOnHand = false;

	ProjectilePool = nullptr;
}

// Called when the game starts or when spawned
void AUnseenWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnseenWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUnseenWeaponBase::ShootingMontageStart()
{
	UE_LOG(LogTemp, Warning, TEXT("ShootingMontageStart"));
}

void AUnseenWeaponBase::ShootingStop()
{
	UE_LOG(LogTemp, Warning, TEXT("ShootingStop"));
}

void AUnseenWeaponBase::ShootWeapon()
{
	UE_LOG(LogTemp, Warning, TEXT("ShootWeapon"));
}

void AUnseenWeaponBase::ShootWeaponNotHorizontalRecoil()
{
}

FVector AUnseenWeaponBase::GetMuzzlePos()
{
	return FVector();
}

void AUnseenWeaponBase::RespawnCharacterSet(int WeaponCurAmmo, float _ShootRate, float CVR, float CHR, float HRA)
{
	CurrentAmmo = WeaponCurAmmo;
	ShootRate = _ShootRate;
	CurrentVerticalRecoil = CVR;
	CurrentHorizontalRecoil = CHR;
	HorizontalRecoilAmount = HRA;
}

