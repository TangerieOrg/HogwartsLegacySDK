#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeVolumetricNoise : public UExpHeightFogParams {
public:
    FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x30
    static UExpHeightFogParamsRelativeVolumetricNoise* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
