#pragma once
#include <cstdint>
#include "EGroundSwarmingFocusType.hpp"
#include "EGroundSwarmingFocusTypeHint.hpp"
#include "FBox.hpp"
#include "FGroundSwarmingVelocityTracker.hpp"
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGroundSwarmingFocus {
    EGroundSwarmingFocusType Type; // 0x0
    EGroundSwarmingFocusTypeHint TypeHint; // 0x1
    char pad_2[0x2];
    FVector Point; // 0x4
    FRotator Orientation; // 0x10
    FVector Extents; // 0x1c
    char pad_28[0x10];
    FBox CurrentBounds; // 0x38
    FVector CurrentPosition; // 0x54
    FVector CurrentVelocity; // 0x60
    char pad_6c[0x4];
    FQuat CurrentOrientation; // 0x70
    FGroundSwarmingVelocityTracker VelocityTracker; // 0x80
    bool bBoundsIncludeNonColliding; // 0x90
    bool bCacheBounds; // 0x91
    char pad_92[0xe];
}; // Size: 0xa0
#pragma pack(pop)
