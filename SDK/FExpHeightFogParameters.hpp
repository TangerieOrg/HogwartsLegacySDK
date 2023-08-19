#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParameters.hpp"
#include "FExpHeightFogDirectionalInscatteringParameters.hpp"
#include "FExpHeightFogInscatteringTextureParameters.hpp"
#include "FExpHeightFogSecondParameters.hpp"
#include "FExpHeightFogVolumetricAdvancedParameters.hpp"
#include "FExpHeightFogVolumetricLightingParameters.hpp"
#include "FExpHeightFogVolumetricNoiseParameters.hpp"
#include "FExpHeightFogVolumetricParameters.hpp"
#pragma pack(push, 1)
struct FExpHeightFogParameters {
    FExpHeightFogBasicParameters Basic; // 0x0
    FExpHeightFogSecondParameters Second; // 0x3c
    FExpHeightFogDirectionalInscatteringParameters DirectionalInscattering; // 0x48
    FExpHeightFogVolumetricParameters Volumetric; // 0x6c
    FExpHeightFogVolumetricLightingParameters VolumetricLighting; // 0xc0
    char pad_f4[0x4];
    FExpHeightFogVolumetricNoiseParameters VolumetricNoise; // 0xf8
    FExpHeightFogVolumetricAdvancedParameters VolumetricAdvanced; // 0x140
    FExpHeightFogInscatteringTextureParameters InscatteringTexture; // 0x1a8
}; // Size: 0x1d8
#pragma pack(pop)
