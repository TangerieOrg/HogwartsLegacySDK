#pragma once
#include <cstdint>
#include "ADEPRECATED_WeatherLocalWindVolume.hpp"
#include "FWindDefinitionName.hpp"
#pragma pack(push, 1)
class ADEPRECATED_WeatherLocalWindVolumePreset : public ADEPRECATED_WeatherLocalWindVolume {
public:
    FWindDefinitionName Preset; // 0x2d0
    char pad_2e0[0x8];
    static ADEPRECATED_WeatherLocalWindVolumePreset* StaticClass();
}; // Size: 0x2e8
#pragma pack(pop)
