#pragma once
#include <cstdint>
#include "FProbeContactShadowsParametersOverride.hpp"
#include "FProbeLightingAdjustmentParametersOverride.hpp"
#include "FProbeLightingToneMapParametersOverride.hpp"
#pragma pack(push, 1)
struct FProbeLightingParametersOverride {
    FProbeLightingAdjustmentParametersOverride Adjustments; // 0x0
    FProbeLightingToneMapParametersOverride ToneMap; // 0x14
    FProbeContactShadowsParametersOverride ContactShadows; // 0x24
}; // Size: 0x3c
#pragma pack(pop)
