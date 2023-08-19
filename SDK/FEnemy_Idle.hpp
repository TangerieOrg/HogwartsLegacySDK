#pragma once
#include <cstdint>
#include "EEnemy_ContextMatch.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FEnemy_Idle {
    EEnemy_ContextMatch ContextMatch; // 0x0
    char pad_1[0x3];
    int32_t SupportedContexts; // 0x4
    int32_t SupportedWeapons; // 0x8
    float MinAngle; // 0xc
    float MaxAngle; // 0x10
    char pad_14[0x4];
    FGameplayTagContainer IATagContainer; // 0x18
    FGameplayTagContainer TagContainer; // 0x38
    int32_t AASupportedDirections; // 0x58
    float Chance; // 0x5c
}; // Size: 0x60
#pragma pack(pop)
