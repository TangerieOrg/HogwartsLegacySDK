#pragma once
#include <cstdint>
#include "FDayNightCloudSceneLightingOverride.hpp"
#include "FDirectionalLightBasicParametersOverride.hpp"
#include "FDirectionalLightShaftsOverride.hpp"
#include "FProbeContactShadowsParametersOverride.hpp"
#include "FProbeLightingAdjustmentParametersOverride.hpp"
#include "FProbeLightingToneMapParametersOverride.hpp"
#include "FSkyAtmosphereParametersOverride.hpp"
#include "FSkyLightBasicParametersOverride.hpp"
#include "FSkyLightHemisphereParametersOverride.hpp"
#include "FVolumetricCloudsAdvancedParametersOverride.hpp"
#include "FVolumetricCloudsBasicParametersOverride.hpp"
#include "FVolumetricCloudsShadowParametersOverride.hpp"
#include "FVolumetricCloudsSkyLightParametersOverride.hpp"
#pragma pack(push, 1)
struct FDayNightLightRigOverride {
    FDirectionalLightBasicParametersOverride DirectionalLight; // 0x0
    FDirectionalLightShaftsOverride DirectionalLightShafts; // 0x28
    FSkyLightBasicParametersOverride SkyLight; // 0x50
    FSkyLightHemisphereParametersOverride SkyLightHemisphere; // 0x64
    FSkyAtmosphereParametersOverride SkyAtmosphere; // 0xa0
    FVolumetricCloudsBasicParametersOverride CloudLighting; // 0x218
    FVolumetricCloudsAdvancedParametersOverride CloudsAdvanced; // 0x22c
    FVolumetricCloudsShadowParametersOverride CloudsShadows; // 0x23c
    FVolumetricCloudsSkyLightParametersOverride CloudsSkyLight; // 0x254
    char pad_274[0x10];
    FDayNightCloudSceneLightingOverride CloudSceneLighting; // 0x284
    FProbeLightingAdjustmentParametersOverride ProbeLightingAdjustments; // 0x2b0
    FProbeLightingToneMapParametersOverride ProbeLightingToneMap; // 0x2c4
    FProbeContactShadowsParametersOverride ProbeContactShadows; // 0x2d4
    char pad_2ec[0x4];
}; // Size: 0x2f0
#pragma pack(pop)
