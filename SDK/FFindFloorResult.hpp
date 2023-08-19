#pragma once
#include <cstdint>
#include "FHitResult.hpp"
#pragma pack(push, 1)
struct FFindFloorResult {
    uint8_t bBlockingHit : 1; // 0x0
    uint8_t bWalkableFloor : 1; // 0x0
    uint8_t bLineTrace : 1; // 0x0
    uint8_t pad_bitfield_0_3 : 5;
    char pad_1[0x3];
    float FloorDist; // 0x4
    float LineDist; // 0x8
    FHitResult HitResult; // 0xc
}; // Size: 0x94
#pragma pack(pop)
