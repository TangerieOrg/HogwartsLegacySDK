#pragma once
#include <cstdint>
#include "ABlendableGlobalLightingVolumeFogBase.hpp"
#include "FExpHeightFogBasicParametersOverride.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersOverride.hpp"
#include "FExpHeightFogSecondParametersOverride.hpp"
#include "FExpHeightFogVolumetricAdvancedParametersOverride.hpp"
#include "FExpHeightFogVolumetricLightingParametersOverride.hpp"
#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "FExpHeightFogVolumetricParametersOverride.hpp"
class UBlendableGlobalLightingVolumeFogDefaults;
#pragma pack(push, 1)
class ABlendableGlobalLightingVolumeFog : public ABlendableGlobalLightingVolumeFogBase {
public:
    FExpHeightFogBasicParametersOverride Basic; // 0x2e8
    FExpHeightFogSecondParametersOverride Second; // 0x324
    FExpHeightFogDirectionalInscatteringParametersOverride DirectionalInscattering; // 0x334
    FExpHeightFogVolumetricParametersOverride Volumetric; // 0x35c
    FExpHeightFogVolumetricLightingParametersOverride VolumetricLighting; // 0x3b0
    FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0x3e8
    FExpHeightFogVolumetricAdvancedParametersOverride VolumetricAdvanced; // 0x430
    UBlendableGlobalLightingVolumeFogDefaults* Defaults; // 0x4a8
    static ABlendableGlobalLightingVolumeFog* StaticClass();
    void ReloadDefaults();
}; // Size: 0x4b0
#pragma pack(pop)
