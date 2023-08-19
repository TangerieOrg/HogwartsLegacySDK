#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FHealthThreshold {
    float HealthValue; // 0x0
    bool bHealthValueIsPercent; // 0x4
    bool bDamageStop; // 0x5
    char pad_6[0x2];
    float DamageStopTime; // 0x8
    bool bShowInUI; // 0xc
    char pad_d[0x3];
    FGameplayTagContainer ImpactTagContainer; // 0x10
    char pad_30[0x8];
}; // Size: 0x38
#pragma pack(pop)
