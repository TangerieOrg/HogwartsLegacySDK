#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWLightProbesDebugType {
    NoDebugDisplay = 0,
    Radiance = 1,
    Irradiance = 2,
    SkyOcclusion = 3,
    SkyLight = 4,
    FullLighting = 5,
    InsideCapture = 6,
    DominantDirection = 7,
    Influence = 8,
    SkyOcc_Influence = 9,
    AvgColor_Influence = 10,
    LightScale_Influence = 11,
    Count = 12,
    MAX = 12,
};
#pragma pack(pop)
