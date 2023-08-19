#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "USceneAction_WeatherSequenceFogNoise.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceFogNoiseOverride : public USceneAction_WeatherSequenceFogNoise {
public:
    FExpHeightFogVolumetricNoiseParametersOverride Noise; // 0x88
    static USceneAction_WeatherSequenceFogNoiseOverride* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
