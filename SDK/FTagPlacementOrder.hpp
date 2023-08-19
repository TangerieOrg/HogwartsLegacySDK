#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#pragma pack(push, 1)
struct FTagPlacementOrder {
    FName TagID; // 0x0
    FBlackboardKeySelector ActorBlackboardKey; // 0x8
    float LifeTime; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
