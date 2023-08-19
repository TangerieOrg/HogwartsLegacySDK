#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParametersRelative.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersRelative.hpp"
#include "FExpHeightFogSecondParametersRelative.hpp"
#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "FExpHeightFogVolumetricParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeFog : public UExpHeightFogParams {
public:
    FExpHeightFogBasicParametersRelative Basic; // 0x30
    FExpHeightFogSecondParametersRelative Second; // 0x184
    FExpHeightFogDirectionalInscatteringParametersRelative DirectionalInscattering; // 0x1e4
    FExpHeightFogVolumetricParametersRelative VolumetricFog; // 0x298
    FExpHeightFogVolumetricNoiseParametersRelative VolumetricNoise; // 0x450
    static UExpHeightFogParamsRelativeFog* StaticClass();
}; // Size: 0x510
#pragma pack(pop)
