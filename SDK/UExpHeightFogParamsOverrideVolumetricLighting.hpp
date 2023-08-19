#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricLightingParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideVolumetricLighting : public UExpHeightFogParams {
public:
    FExpHeightFogVolumetricLightingParametersOverride VolumetricLighting; // 0x30
    static UExpHeightFogParamsOverrideVolumetricLighting* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
