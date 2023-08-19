#pragma once
#include <cstdint>
#include "FDayNightCloudSceneLighting.hpp"
#include "FDirectionalLightBasicParameters.hpp"
#include "FDirectionalLightShafts.hpp"
#include "FProbeContactShadowsParameters.hpp"
#include "FProbeLightingAdjustmentParameters.hpp"
#include "FProbeLightingToneMapParameters.hpp"
#include "FSkyAtmosphereParameters.hpp"
#include "FSkyLightBasicParameters.hpp"
#include "FSkyLightHemisphereParameters.hpp"
#include "FVolumetricCloudsAdvancedParameters.hpp"
#include "FVolumetricCloudsBasicParameters.hpp"
#include "FVolumetricCloudsSceneLightParameters.hpp"
#include "FVolumetricCloudsShadowParameters.hpp"
#include "FVolumetricCloudsSkyLightParameters.hpp"
#pragma pack(push, 1)
struct FDayNightLightRigSetup {
    FDirectionalLightBasicParameters DirectionalLight; // 0x0
    FDirectionalLightShafts DirectionalLightShafts; // 0x24
    FSkyLightBasicParameters SkyLight; // 0x4c
    FSkyLightHemisphereParameters SkyLightHemisphere; // 0x5c
    FSkyAtmosphereParameters SkyAtmosphere; // 0x98
    FVolumetricCloudsBasicParameters CloudLighting; // 0x1e0
    FVolumetricCloudsAdvancedParameters CloudsAdvanced; // 0x1f8
    FVolumetricCloudsShadowParameters CloudsShadows; // 0x200
    FVolumetricCloudsSkyLightParameters CloudsSkyLight; // 0x214
    char pad_230[0xc];
    FDayNightCloudSceneLighting CloudSceneLighting; // 0x23c
    FVolumetricCloudsSceneLightParameters CloudsSceneLight; // 0x264
    FProbeLightingAdjustmentParameters ProbeLightingAdjustments; // 0x288
    FProbeLightingToneMapParameters ProbeLightingToneMap; // 0x298
    FProbeContactShadowsParameters ProbeContactShadows; // 0x2a4
}; // Size: 0x2b8
#pragma pack(pop)
