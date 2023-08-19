#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParametersOverride.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersOverride.hpp"
#include "FExpHeightFogSecondParametersOverride.hpp"
#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "FExpHeightFogVolumetricParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideFog : public UExpHeightFogParams {
public:
    FExpHeightFogBasicParametersOverride Basic; // 0x30
    FExpHeightFogSecondParametersOverride Second; // 0x6c
    FExpHeightFogDirectionalInscatteringParametersOverride DirectionalInscattering; // 0x7c
    FExpHeightFogVolumetricParametersOverride VolumetricFog; // 0xa4
    FExpHeightFogVolumetricNoiseParametersOverride VolumetricNoise; // 0xf8
    static UExpHeightFogParamsOverrideFog* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
