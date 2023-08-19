#pragma once
#include <cstdint>
#include "EEnemyGoblinAISpawnType.hpp"
#include "UEnemyAISpawnData.hpp"
#pragma pack(push, 1)
class UEnemyAIGoblinSpawnData : public UEnemyAISpawnData {
public:
    EEnemyGoblinAISpawnType Type; // 0x28
    char pad_29[0x7];
    static UEnemyAIGoblinSpawnData* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
