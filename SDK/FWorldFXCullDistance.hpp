#pragma once
#include <cstdint>
#include "EWorldFXDistanceType.hpp"
#pragma pack(push, 1)
struct FWorldFXCullDistance {
    float DistanceMeters; // 0x0
    EWorldFXDistanceType DistanceType; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
