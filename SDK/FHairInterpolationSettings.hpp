#pragma once
#include <cstdint>
#include "EHairInterpolationQuality.hpp"
#include "EHairInterpolationWeight.hpp"
#pragma pack(push, 1)
struct FHairInterpolationSettings {
    bool bOverrideGuides; // 0x0
    char pad_1[0x3];
    float HairToGuideDensity; // 0x4
    EHairInterpolationQuality InterpolationQuality; // 0x8
    EHairInterpolationWeight InterpolationDistance; // 0x9
    bool bRandomizeGuide; // 0xa
    bool bUseUniqueGuide; // 0xb
}; // Size: 0xc
#pragma pack(pop)
