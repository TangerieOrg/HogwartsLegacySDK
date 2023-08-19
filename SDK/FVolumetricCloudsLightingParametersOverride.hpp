#pragma once
#include <cstdint>
#include "FVolumetricCloudsAdvancedParametersOverride.hpp"
#include "FVolumetricCloudsBasicParametersOverride.hpp"
#include "FVolumetricCloudsSceneLightParametersOverride.hpp"
#include "FVolumetricCloudsShadowParametersOverride.hpp"
#include "FVolumetricCloudsSkyLightParametersOverride.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsLightingParametersOverride {
    FVolumetricCloudsBasicParametersOverride Basic; // 0x0
    FVolumetricCloudsSkyLightParametersOverride SkyLight; // 0x14
    FVolumetricCloudsShadowParametersOverride Shadows; // 0x34
    FVolumetricCloudsAdvancedParametersOverride Advanced; // 0x4c
    char pad_5c[0x10];
    FVolumetricCloudsSceneLightParametersOverride SceneLight; // 0x6c
}; // Size: 0x94
#pragma pack(pop)
