#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
class UParticleSystem;
class UNiagaraSystem;
#pragma pack(push, 1)
class UEnemy_SpawnSpiders : public UObject {
public:
    char pad_28[0x28];
    FVector SpawnLocation; // 0x50
    FVector spawnDirection; // 0x5c
    AActor* ParentActor; // 0x68
    FString SpawnObjectName; // 0x70
    FGameplayTag GroupTag; // 0x80
    int32_t SpawnCount; // 0x88
    int32_t SpawnDeviation; // 0x8c
    float SpawnInterval; // 0x90
    float SpawnAngleFromRange; // 0x94
    float SpawnAngleDeviation; // 0x98
    float SpawnDist; // 0x9c
    float SpawnUpDist; // 0xa0
    float SpawnLandDist; // 0xa4
    float SpawnLandDistVariance; // 0xa8
    char pad_ac[0x4];
    UParticleSystem* SpawnParticleSystem; // 0xb0
    UParticleSystem* SpawnParticleSystemDeath; // 0xb8
    UNiagaraSystem* SpawnParticleSystem2; // 0xc0
    UNiagaraSystem* SpawnParticleSystemDeath2; // 0xc8
    char pad_d0[0x50];
    static UEnemy_SpawnSpiders* StaticClass();
    bool Update(float InDeltaTime);
    void Spawn();
    void DELETE();
}; // Size: 0x120
#pragma pack(pop)
