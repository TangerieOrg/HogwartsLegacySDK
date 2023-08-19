#pragma once
#include <cstdint>
#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "FGlobalLightingCustomBlendableNameTime.hpp"
#pragma pack(push, 1)
struct FDirLightPseudoFadeCustomBlendableInterval {
    FGlobalLightingCustomBlendableNameTime StartTime; // 0x0
    FGlobalLightingCustomBlendableNameTime EndTime; // 0x10
    FGlobalLightingCustomBlendableNameTime FadeTime; // 0x20
    FGlobalLightingCustomBlendableNameScalar Disabled; // 0x30
}; // Size: 0x40
#pragma pack(pop)
