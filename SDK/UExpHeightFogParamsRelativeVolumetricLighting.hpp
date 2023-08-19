#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricLightingParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeVolumetricLighting : public UExpHeightFogParams {
public:
    FExpHeightFogVolumetricLightingParametersRelative VolumetricLighting; // 0x30
    static UExpHeightFogParamsRelativeVolumetricLighting* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
