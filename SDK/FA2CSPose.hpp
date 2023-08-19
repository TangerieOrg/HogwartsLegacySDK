#pragma once
#include <cstdint>
#include "FA2Pose.hpp"
#pragma pack(push, 1)
struct FA2CSPose : public FA2Pose {
    char pad_10[0x8];
    TArray<uint8_t> ComponentSpaceFlags; // 0x18
}; // Size: 0x28
#pragma pack(pop)
