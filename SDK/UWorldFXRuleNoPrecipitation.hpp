#pragma once
#include <cstdint>
#include "UWorldFXRulePrecipitation.hpp"
#pragma pack(push, 1)
class UWorldFXRuleNoPrecipitation : public UWorldFXRulePrecipitation {
public:
    float MaxCoverageThreshold; // 0x28
    float MaxIntensityThreshold; // 0x2c
    static UWorldFXRuleNoPrecipitation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
