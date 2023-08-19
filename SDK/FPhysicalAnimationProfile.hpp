#pragma once
#include <cstdint>
#include "FPhysicalAnimationData.hpp"
#pragma pack(push, 1)
struct FPhysicalAnimationProfile {
    FName ProfileName; // 0x0
    FPhysicalAnimationData PhysicalAnimationData; // 0x8
}; // Size: 0x2c
#pragma pack(pop)
