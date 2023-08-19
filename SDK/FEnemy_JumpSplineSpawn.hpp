#pragma once
#include <cstdint>
#include "FEnemy_SpawmParams.hpp"
#include "FGameplayTagContainer.hpp"
#include "FNPC_JumpSplineData.hpp"
#pragma pack(push, 1)
struct FEnemy_JumpSplineSpawn : public FEnemy_SpawmParams {
    char pad_1[0x7];
    FGameplayTagContainer FreezeAATagContainer; // 0x8
    float FreezeAnimOffset; // 0x28
    char pad_2c[0x4];
    FNPC_JumpSplineData JumpSplineParams; // 0x30
    FGameplayTagContainer JumpSplineAATagContainer; // 0x70
}; // Size: 0x90
#pragma pack(pop)
