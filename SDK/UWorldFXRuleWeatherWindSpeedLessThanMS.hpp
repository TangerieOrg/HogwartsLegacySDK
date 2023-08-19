#pragma once
#include <cstdint>
#include "UWorldFXRuleWeatherWindSpeed.hpp"
#pragma pack(push, 1)
class UWorldFXRuleWeatherWindSpeedLessThanMS : public UWorldFXRuleWeatherWindSpeed {
public:
    float Threshold; // 0x28
    char pad_2c[0x4];
    static UWorldFXRuleWeatherWindSpeedLessThanMS* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
