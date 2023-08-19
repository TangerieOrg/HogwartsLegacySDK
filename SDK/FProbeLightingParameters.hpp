#pragma once
#include <cstdint>
#include "FProbeContactShadowsParameters.hpp"
#include "FProbeLightingAdjustmentParameters.hpp"
#include "FProbeLightingToneMapParameters.hpp"
#pragma pack(push, 1)
struct FProbeLightingParameters {
    FProbeLightingAdjustmentParameters Adjustments; // 0x0
    FProbeLightingToneMapParameters ToneMap; // 0x10
    FProbeContactShadowsParameters ContactShadows; // 0x1c
}; // Size: 0x30
#pragma pack(pop)
