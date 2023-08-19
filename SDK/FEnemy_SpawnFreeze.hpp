#pragma once
#include <cstdint>
#include "FEnemy_SpawmParams.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FEnemy_SpawnFreeze : public FEnemy_SpawmParams {
    char pad_1[0x1f];
    float AnimOffset; // 0x20
    bool bBranchOnRelease; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
