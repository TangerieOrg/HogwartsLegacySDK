#pragma once
#include <cstdint>
#include "UWorldFXRulePrecipitation.hpp"
#pragma pack(push, 1)
class UWorldFXRuleOnlyDuringPrecipitation : public UWorldFXRulePrecipitation {
public:
    int32_t Precipitation; // 0x28
    int32_t Types; // 0x2c
    float MinCoverageThreshold; // 0x30
    float MaxCoverageThreshold; // 0x34
    float MinIntensityThreshold; // 0x38
    float MaxIntensityThreshold; // 0x3c
    static UWorldFXRuleOnlyDuringPrecipitation* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
