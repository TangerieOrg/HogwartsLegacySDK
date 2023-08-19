#pragma once
#include <cstdint>
#include "FAdjustedValueFloat.hpp"
#pragma pack(push, 1)
struct FExpHeightFogVolumetricNoiseParametersRelative {
    FAdjustedValueFloat NoiseMinFactor; // 0x0
    FAdjustedValueFloat NoiseMaxFactor; // 0x20
    FAdjustedValueFloat NoiseTilingSize; // 0x40
    FAdjustedValueFloat NoiseSmoothStepMin; // 0x60
    FAdjustedValueFloat NoiseSmoothStepMax; // 0x80
    FAdjustedValueFloat WindFactor; // 0xa0
}; // Size: 0xc0
#pragma pack(pop)
