#pragma once
#include <cstdint>
#include "AWeatherVolume.hpp"
#pragma pack(push, 1)
class AWeatherDisableVolume : public AWeatherVolume {
public:
    bool bDisableWeather; // 0x280
    char pad_281[0x7];
    static AWeatherDisableVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
