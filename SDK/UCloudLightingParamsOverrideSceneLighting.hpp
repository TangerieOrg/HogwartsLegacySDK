#pragma once
#include <cstdint>
#include "FVolumetricCloudsSceneLightRotatorParametersOverride.hpp"
#include "UCloudLightingParams.hpp"
#pragma pack(push, 1)
class UCloudLightingParamsOverrideSceneLighting : public UCloudLightingParams {
public:
    FVolumetricCloudsSceneLightRotatorParametersOverride SceneLight; // 0x28
    static UCloudLightingParamsOverrideSceneLighting* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
