#pragma once
#include <cstdint>
#include "EWalkableSlopeBehavior.hpp"
#pragma pack(push, 1)
struct FWalkableSlopeOverride {
    EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
    char pad_1[0x3];
    float WalkableSlopeAngle; // 0x4
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
