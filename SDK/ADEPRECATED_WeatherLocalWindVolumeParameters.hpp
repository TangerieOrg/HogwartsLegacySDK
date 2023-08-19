#pragma once
#include <cstdint>
#include "ADEPRECATED_WeatherLocalWindVolume.hpp"
#include "FWindParameters.hpp"
#pragma pack(push, 1)
class ADEPRECATED_WeatherLocalWindVolumeParameters : public ADEPRECATED_WeatherLocalWindVolume {
public:
    FWindParameters WindParameters; // 0x2d0
    static ADEPRECATED_WeatherLocalWindVolumeParameters* StaticClass();
}; // Size: 0x3f8
#pragma pack(pop)
