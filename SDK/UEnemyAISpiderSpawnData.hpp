#pragma once
#include <cstdint>
#include "EEnemySpiderAISpawnType.hpp"
#include "UEnemyAISpawnData.hpp"
#pragma pack(push, 1)
class UEnemyAISpiderSpawnData : public UEnemyAISpawnData {
public:
    EEnemySpiderAISpawnType Type; // 0x28
    char pad_29[0x3];
    float DescendSpeed; // 0x2c
    float FallGravityScale; // 0x30
    char pad_34[0x4];
    static UEnemyAISpiderSpawnData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
