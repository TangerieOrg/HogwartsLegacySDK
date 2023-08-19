#pragma once
#include <cstdint>
#include "UWeatherRemapBase.hpp"
#pragma pack(push, 1)
class UWeatherRemapRain : public UWeatherRemapBase {
public:
    float VfxThreshold; // 0x30
    float SfxThreshold; // 0x34
    float ImpactThreshold; // 0x38
    char pad_3c[0x4];
    static UWeatherRemapRain* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
