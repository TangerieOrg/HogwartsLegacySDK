#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigRenderingCuts {
    Camera = 0,
    Exposure = 1,
    PreExposure = 2,
    Fog = 3,
    SkyLight = 4,
    AudioListener = 5,
    ESceneRigRenderingCuts_MAX = 6,
};
#pragma pack(pop)
