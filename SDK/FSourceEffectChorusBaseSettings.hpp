#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSourceEffectChorusBaseSettings {
    float Depth; // 0x0
    float Frequency; // 0x4
    float Feedback; // 0x8
    float WetLevel; // 0xc
    float DryLevel; // 0x10
    float Spread; // 0x14
}; // Size: 0x18
#pragma pack(pop)
