#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideVolumetricFog : public UExpHeightFogParams {
public:
    FExpHeightFogVolumetricParametersOverride VolumetricFog; // 0x30
    char pad_84[0x4];
    static UExpHeightFogParamsOverrideVolumetricFog* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
