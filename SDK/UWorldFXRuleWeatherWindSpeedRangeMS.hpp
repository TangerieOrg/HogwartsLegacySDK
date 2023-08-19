#pragma once
#include <cstdint>
#include "UWorldFXRuleWeatherWindSpeed.hpp"
#pragma pack(push, 1)
class UWorldFXRuleWeatherWindSpeedRangeMS : public UWorldFXRuleWeatherWindSpeed {
public:
    float minThreshold; // 0x28
    float maxThreshold; // 0x2c
    static UWorldFXRuleWeatherWindSpeedRangeMS* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
