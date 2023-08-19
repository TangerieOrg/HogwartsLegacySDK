#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParametersOverride.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersOverride.hpp"
#include "FExpHeightFogInscatteringTextureParametersOverride.hpp"
#include "FExpHeightFogSecondParametersOverride.hpp"
#include "FExpHeightFogVolumetricAdvancedParametersOverride.hpp"
#include "FExpHeightFogVolumetricLightingParametersOverride.hpp"
#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "FExpHeightFogVolumetricParametersOverride.hpp"
#pragma pack(push, 1)
struct FExpHeightFogParametersOverride {
    FExpHeightFogBasicParametersOverride Basic; // 0x0
    FExpHeightFogSecondParametersOverride Second; // 0x3c
    FExpHeightFogDirectionalInscatteringParametersOverride DirectionalInscattering; // 0x4c
    FExpHeightFogVolumetricParametersOverride Volumetric; // 0x74
    FExpHeightFogVolumetricLightingParametersOverride VolumetricLighting; // 0xc8
    FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0x100
    FExpHeightFogVolumetricAdvancedParametersOverride VolumetricAdvanced; // 0x148
    FExpHeightFogInscatteringTextureParametersOverride InscatteringTexture; // 0x1c0
}; // Size: 0x1f8
#pragma pack(pop)
