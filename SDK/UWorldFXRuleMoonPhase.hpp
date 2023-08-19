#pragma once
#include <cstdint>
#include "UWorldFXRuleNightDay.hpp"
#pragma pack(push, 1)
class UWorldFXRuleMoonPhase : public UWorldFXRuleNightDay {
public:
    int32_t MoonPhases; // 0x28
    bool bOnlyAtNight; // 0x2c
    char pad_2d[0x3];
    float NightThreshold; // 0x30
    char pad_34[0x4];
    static UWorldFXRuleMoonPhase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
