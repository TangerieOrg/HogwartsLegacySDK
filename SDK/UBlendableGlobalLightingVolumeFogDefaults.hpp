#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParametersOverride.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersOverride.hpp"
#include "FExpHeightFogSecondParametersOverride.hpp"
#include "FExpHeightFogVolumetricLightingParametersOverride.hpp"
#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "FExpHeightFogVolumetricParametersOverride.hpp"
#include "UBlendableGlobalLightingVolumeFogDefaultsBase.hpp"
#pragma pack(push, 1)
class UBlendableGlobalLightingVolumeFogDefaults : public UBlendableGlobalLightingVolumeFogDefaultsBase {
public:
    FExpHeightFogBasicParametersOverride Basic; // 0x80
    FExpHeightFogSecondParametersOverride Second; // 0xbc
    FExpHeightFogDirectionalInscatteringParametersOverride DirectionalInscattering; // 0xcc
    FExpHeightFogVolumetricParametersOverride Volumetric; // 0xf4
    FExpHeightFogVolumetricLightingParametersOverride VolumetricLighting; // 0x148
    FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0x180
    static UBlendableGlobalLightingVolumeFogDefaults* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
