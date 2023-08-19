#pragma once
#include <cstdint>
#include "EGroundSwarmingCurlNoiseMode.hpp"
#pragma pack(push, 1)
struct FGroundSwarmingCurlNoiseParameters {
    EGroundSwarmingCurlNoiseMode Mode; // 0x0
    char pad_1[0x3];
    float Scale; // 0x4
    float SampleRate; // 0x8
    float Force; // 0xc
    float ForceVariancePercent; // 0x10
    float Epsilon; // 0x14
}; // Size: 0x18
#pragma pack(pop)
