#pragma once
#include <cstdint>
#include "FVolumetricCloudsLightingParametersOverride.hpp"
#include "UCloudLightingParams.hpp"
#pragma pack(push, 1)
class UCloudLightingParamsOverrideFull : public UCloudLightingParams {
public:
    FVolumetricCloudsLightingParametersOverride Parameters; // 0x28
    char pad_bc[0x4];
    static UCloudLightingParamsOverrideFull* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
