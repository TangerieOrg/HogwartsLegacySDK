#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParametersRelative.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersRelative.hpp"
#include "FExpHeightFogSecondParametersRelative.hpp"
#include "FExpHeightFogVolumetricAdvancedParametersRelative.hpp"
#include "FExpHeightFogVolumetricLightingParametersRelative.hpp"
#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "FExpHeightFogVolumetricParametersRelative.hpp"
#pragma pack(push, 1)
struct FExpHeightFogParametersRelative {
    FExpHeightFogBasicParametersRelative Basic; // 0x0
    FExpHeightFogSecondParametersRelative Second; // 0x154
    FExpHeightFogDirectionalInscatteringParametersRelative DirectionalInscattering; // 0x1b4
    FExpHeightFogVolumetricParametersRelative Volumetric; // 0x268
    FExpHeightFogVolumetricLightingParametersRelative VolumetricLighting; // 0x420
    FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x5c0
    FExpHeightFogVolumetricAdvancedParametersRelative VolumetricAdvanced; // 0x680
}; // Size: 0x7e4
#pragma pack(pop)
