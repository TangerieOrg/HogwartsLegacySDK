#pragma once
#include <cstdint>
#include "ELightUnits.hpp"
#pragma pack(push, 1)
struct FAnimatedLightExtraCachedLightSettings {
    ELightUnits IntensityUnits; // 0x0
    char pad_1[0x3];
    float CosHalfConeAngle; // 0x4
}; // Size: 0x8
#pragma pack(pop)
