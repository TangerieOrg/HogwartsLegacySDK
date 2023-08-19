#pragma once
#include <cstdint>
#include "FHairDecimationSettings.hpp"
#include "FHairInterpolationSettings.hpp"
#pragma pack(push, 1)
struct FHairGroupsInterpolation {
    FHairDecimationSettings DecimationSettings; // 0x0
    FHairInterpolationSettings InterpolationSettings; // 0x8
}; // Size: 0x14
#pragma pack(pop)
