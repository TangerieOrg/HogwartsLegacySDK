#pragma once
#include <cstdint>
#include "FVolumetricCloudsAdvancedParameters.hpp"
#include "FVolumetricCloudsBasicParameters.hpp"
#include "FVolumetricCloudsSceneLightParameters.hpp"
#include "FVolumetricCloudsShadowParameters.hpp"
#include "FVolumetricCloudsSkyLightParameters.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsLightingParameters {
    FVolumetricCloudsBasicParameters Basic; // 0x0
    FVolumetricCloudsSkyLightParameters SkyLight; // 0x18
    FVolumetricCloudsShadowParameters Shadows; // 0x34
    FVolumetricCloudsAdvancedParameters Advanced; // 0x48
    char pad_50[0xc];
    FVolumetricCloudsSceneLightParameters SceneLight; // 0x5c
}; // Size: 0x80
#pragma pack(pop)
