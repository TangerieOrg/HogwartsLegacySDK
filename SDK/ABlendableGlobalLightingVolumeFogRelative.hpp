#pragma once
#include <cstdint>
#include "ABlendableGlobalLightingVolumeFogBase.hpp"
#include "FExpHeightFogBasicParametersRelative.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersRelative.hpp"
#include "FExpHeightFogSecondParametersRelative.hpp"
#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "FExpHeightFogVolumetricParametersRelative.hpp"
class UBlendableGlobalLightingVolumeFogRelativeDefaults;
#pragma pack(push, 1)
class ABlendableGlobalLightingVolumeFogRelative : public ABlendableGlobalLightingVolumeFogBase {
public:
    FExpHeightFogBasicParametersRelative Basic; // 0x2e8
    FExpHeightFogSecondParametersRelative Second; // 0x43c
    FExpHeightFogDirectionalInscatteringParametersRelative DirectionalInscattering; // 0x49c
    FExpHeightFogVolumetricParametersRelative Volumetric; // 0x550
    FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x708
    UBlendableGlobalLightingVolumeFogRelativeDefaults* Defaults; // 0x7c8
    static ABlendableGlobalLightingVolumeFogRelative* StaticClass();
    void ReloadDefaults();
}; // Size: 0x7d0
#pragma pack(pop)
