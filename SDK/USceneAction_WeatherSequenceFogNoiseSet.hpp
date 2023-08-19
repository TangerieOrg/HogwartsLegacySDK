#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricNoiseParameters.hpp"
#include "USceneAction_WeatherSequenceFogNoise.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceFogNoiseSet : public USceneAction_WeatherSequenceFogNoise {
public:
    FExpHeightFogVolumetricNoiseParameters Noise; // 0x88
    static USceneAction_WeatherSequenceFogNoiseSet* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
