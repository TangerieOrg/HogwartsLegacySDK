#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGroundSwarmingCurlNoiseForce {
    FVector Force; // 0x0
    float Timeout; // 0xc
}; // Size: 0x10
#pragma pack(pop)
