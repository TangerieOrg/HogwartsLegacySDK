#pragma once
#include <cstdint>
#include "FEnemy_SpawmParams.hpp"
#include "FGameplayTagContainer.hpp"
class APerceptionPointArea;
#pragma pack(push, 1)
struct FEnemy_SpawnAsleep : public FEnemy_SpawmParams {
    char pad_1[0xf];
    FGameplayTagContainer AATagContainer; // 0x10
    float AnimOffset; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
