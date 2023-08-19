#pragma once
#include <cstdint>
#include "FVolumetricCloudsSceneLightRotatorParameters.hpp"
#include "UCloudLightingParams.hpp"
#pragma pack(push, 1)
class UCloudLightingParamsSceneLighting : public UCloudLightingParams {
public:
    FVolumetricCloudsSceneLightRotatorParameters SceneLight; // 0x28
    char pad_4c[0x4];
    static UCloudLightingParamsSceneLighting* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
