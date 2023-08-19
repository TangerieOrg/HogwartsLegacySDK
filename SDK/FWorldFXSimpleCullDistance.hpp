#pragma once
#include <cstdint>
#include "EWorldFXSimpleDistanceType.hpp"
#pragma pack(push, 1)
struct FWorldFXSimpleCullDistance {
    float DistanceMeters; // 0x0
    EWorldFXSimpleDistanceType DistanceType; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
