#pragma once
#include <cstdint>
#include "FVolumetricCloudsBasicParametersOverride.hpp"
#include "FVolumetricCloudsSkyLightParametersOverride.hpp"
#include "UCloudLightingParams.hpp"
#pragma pack(push, 1)
class UCloudLightingParamsOverrideBasic : public UCloudLightingParams {
public:
    FVolumetricCloudsBasicParametersOverride Basic; // 0x28
    FVolumetricCloudsSkyLightParametersOverride SkyLight; // 0x3c
    char pad_5c[0x4];
    static UCloudLightingParamsOverrideBasic* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
