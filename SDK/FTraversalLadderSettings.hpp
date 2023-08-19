#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FTraversalLadderSettings {
    FVector2D LadderExtent; // 0x0
    float SweepLookAheadTime; // 0x8
    float SweepLookAheadTimeWhenJumping; // 0xc
    float SweepWidth; // 0x10
    int32_t MountRungsBottom; // 0x14
    int32_t MountRungsTop; // 0x18
    int32_t ClimbAnimRungs; // 0x1c
    float CharacterFwdOffset; // 0x20
}; // Size: 0x24
#pragma pack(pop)
