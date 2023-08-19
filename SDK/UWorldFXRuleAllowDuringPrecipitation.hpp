#pragma once
#include <cstdint>
#include "UWorldFXRulePrecipitation.hpp"
#pragma pack(push, 1)
class UWorldFXRuleAllowDuringPrecipitation : public UWorldFXRulePrecipitation {
public:
    int32_t AllowDuringPrecipitation; // 0x28
    int32_t AllowDuringTypes; // 0x2c
    float MaxCoverageThreshold; // 0x30
    float MaxIntensityThreshold; // 0x34
    static UWorldFXRuleAllowDuringPrecipitation* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
