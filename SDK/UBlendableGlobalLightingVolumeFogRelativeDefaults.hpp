#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParametersRelative.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersRelative.hpp"
#include "FExpHeightFogSecondParametersRelative.hpp"
#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "FExpHeightFogVolumetricParametersRelative.hpp"
#include "UBlendableGlobalLightingVolumeFogDefaultsBase.hpp"
#pragma pack(push, 1)
class UBlendableGlobalLightingVolumeFogRelativeDefaults : public UBlendableGlobalLightingVolumeFogDefaultsBase {
public:
    FExpHeightFogBasicParametersRelative Basic; // 0x80
    FExpHeightFogSecondParametersRelative Second; // 0x1d4
    FExpHeightFogDirectionalInscatteringParametersRelative DirectionalInscattering; // 0x234
    FExpHeightFogVolumetricParametersRelative Volumetric; // 0x2e8
    FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x4a0
    static UBlendableGlobalLightingVolumeFogRelativeDefaults* StaticClass();
}; // Size: 0x560
#pragma pack(pop)
