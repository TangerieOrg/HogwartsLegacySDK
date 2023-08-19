#pragma once
#include <cstdint>
#include "EMobileShadowQuality.hpp"
#pragma pack(push, 1)
struct FMaterialQualityOverrides {
    bool bDiscardQualityDuringCook; // 0x0
    bool bEnableOverride; // 0x1
    bool bForceFullyRough; // 0x2
    bool bForceNonMetal; // 0x3
    bool bForceDisableLMDirectionality; // 0x4
    bool bForceLQReflections; // 0x5
    bool bForceDisablePreintegratedGF; // 0x6
    bool bDisableMaterialNormalCalculation; // 0x7
    EMobileShadowQuality MobileShadowQuality; // 0x8
}; // Size: 0x9
#pragma pack(pop)
