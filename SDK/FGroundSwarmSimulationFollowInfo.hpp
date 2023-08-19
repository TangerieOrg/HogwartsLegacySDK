#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGroundSwarmSimulationFollowInfo {
    FVector Position; // 0x0
    FVector Velocity; // 0xc
    float ForceFactor; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
