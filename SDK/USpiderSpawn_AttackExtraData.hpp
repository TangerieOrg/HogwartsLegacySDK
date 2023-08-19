#pragma once
#include <cstdint>
#include "UEnemy_AttackExtraData.hpp"
#pragma pack(push, 1)
class USpiderSpawn_AttackExtraData : public UEnemy_AttackExtraData {
public:
    int32_t MinSpawn; // 0x28
    int32_t MaxSpawn; // 0x2c
    int32_t MinToAttack; // 0x30
    int32_t TotalSpawn; // 0x34
    float SpawnEligibleWaitTime; // 0x38
    char pad_3c[0xc];
    static USpiderSpawn_AttackExtraData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
