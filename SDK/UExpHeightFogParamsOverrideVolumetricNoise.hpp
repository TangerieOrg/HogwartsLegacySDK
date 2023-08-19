#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideVolumetricNoise : public UExpHeightFogParams {
public:
    FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0x30
    static UExpHeightFogParamsOverrideVolumetricNoise* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
