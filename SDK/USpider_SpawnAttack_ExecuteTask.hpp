#pragma once
#include <cstdint>
#include "UExecuteTask.hpp"
class UEnemy_SpawnSpiders;
#pragma pack(push, 1)
class USpider_SpawnAttack_ExecuteTask : public UExecuteTask {
public:
    bool bDeathSpawn; // 0x28
    char pad_29[0x3];
    int32_t bDeathSpawnCount; // 0x2c
    int32_t bDeathSpawnDeviation; // 0x30
    float SpawnInterval; // 0x34
    float SpawnAngleFromRange; // 0x38
    float SpawnAngleDeviation; // 0x3c
    float SpawnDist; // 0x40
    float SpawnLandDist; // 0x44
    float SpawnLandDistVariance; // 0x48
    char pad_4c[0x4];
    UEnemy_SpawnSpiders* SpawnSpidersPtr; // 0x50
    static USpider_SpawnAttack_ExecuteTask* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
