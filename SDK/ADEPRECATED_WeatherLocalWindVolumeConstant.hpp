#pragma once
#include <cstdint>
#include "ADEPRECATED_WeatherLocalWindVolume.hpp"
#include "FWindParametersInstant.hpp"
#pragma pack(push, 1)
class ADEPRECATED_WeatherLocalWindVolumeConstant : public ADEPRECATED_WeatherLocalWindVolume {
public:
    FWindParametersInstant WindParameters; // 0x2d0
    static ADEPRECATED_WeatherLocalWindVolumeConstant* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
