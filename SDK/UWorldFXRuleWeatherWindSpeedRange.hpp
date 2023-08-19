#pragma once
#include <cstdint>
#include "EBeaufortWindScale.hpp"
#include "UWorldFXRuleWeatherWindSpeed.hpp"
#pragma pack(push, 1)
class UWorldFXRuleWeatherWindSpeedRange : public UWorldFXRuleWeatherWindSpeed {
public:
    EBeaufortWindScale minThreshold; // 0x28
    EBeaufortWindScale maxThreshold; // 0x29
    char pad_2a[0x6];
    static UWorldFXRuleWeatherWindSpeedRange* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
