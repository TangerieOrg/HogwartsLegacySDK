#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeVolumetricFog : public UExpHeightFogParams {
public:
    FExpHeightFogVolumetricParametersRelative VolumetricFog; // 0x30
    static UExpHeightFogParamsRelativeVolumetricFog* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
