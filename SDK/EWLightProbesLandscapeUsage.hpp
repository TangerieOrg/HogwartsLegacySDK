#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWLightProbesLandscapeUsage : int32_t {
    Anywhere = 0,
    OnlyAbove = 1,
    OnlyBelow = 2,
    EWLightProbesLandscapeUsage_MAX = 3,
};
#pragma pack(pop)
