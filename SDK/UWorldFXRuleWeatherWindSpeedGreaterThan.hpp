#pragma once
#include <cstdint>
#include "EBeaufortWindScale.hpp"
#include "UWorldFXRuleWeatherWindSpeed.hpp"
#pragma pack(push, 1)
class UWorldFXRuleWeatherWindSpeedGreaterThan : public UWorldFXRuleWeatherWindSpeed {
public:
    EBeaufortWindScale Threshold; // 0x28
    char pad_29[0x7];
    static UWorldFXRuleWeatherWindSpeedGreaterThan* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
