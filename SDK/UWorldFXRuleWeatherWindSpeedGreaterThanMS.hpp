#pragma once
#include <cstdint>
#include "UWorldFXRuleWeatherWindSpeed.hpp"
#pragma pack(push, 1)
class UWorldFXRuleWeatherWindSpeedGreaterThanMS : public UWorldFXRuleWeatherWindSpeed {
public:
    float Threshold; // 0x28
    char pad_2c[0x4];
    static UWorldFXRuleWeatherWindSpeedGreaterThanMS* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
