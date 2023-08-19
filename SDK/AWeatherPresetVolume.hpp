#pragma once
#include <cstdint>
#include "AWeatherPresetVolumeBase.hpp"
#include "FWeatherDefinitionName.hpp"
#pragma pack(push, 1)
class AWeatherPresetVolume : public AWeatherPresetVolumeBase {
public:
    FWeatherDefinitionName Preset; // 0x2a8
    int32_t Seasons; // 0x2b8
    bool bInstantChange; // 0x2bc
    char pad_2bd[0x3];
    static AWeatherPresetVolume* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
