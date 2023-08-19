#pragma once
#include <cstdint>
#include "FOdcFlags.hpp"
#include "OdcObstacleBehavior.hpp"
#pragma pack(push, 1)
struct FOdcObstacleData {
    int32_t Layers; // 0x0
    OdcObstacleBehavior Behavior; // 0x4
    float Cost; // 0x8
    FOdcFlags BlockageFlags; // 0xc
    uint32_t MarkupFlags; // 0x10
    char pad_14[0x4];
    FString Name; // 0x18
}; // Size: 0x28
#pragma pack(pop)
