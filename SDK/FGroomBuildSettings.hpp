#pragma once
#include <cstdint>
#include "EGroomInterpolationQuality.hpp"
#include "EGroomInterpolationWeight.hpp"
#pragma pack(push, 1)
struct FGroomBuildSettings {
    bool bOverrideGuides; // 0x0
    char pad_1[0x3];
    float HairToGuideDensity; // 0x4
    EGroomInterpolationQuality InterpolationQuality; // 0x8
    EGroomInterpolationWeight InterpolationDistance; // 0x9
    bool bRandomizeGuide; // 0xa
    bool bUseUniqueGuide; // 0xb
}; // Size: 0xc
#pragma pack(pop)
