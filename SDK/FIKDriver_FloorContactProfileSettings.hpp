#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FIKDriver_FloorContactProfileSettings {
    float HipMultiplier; // 0x0
    float MaxLegExtension; // 0x4
    float ReverseFootFactor; // 0x8
    float PitchLimit; // 0xc
    float StabilizationThreshold; // 0x10
}; // Size: 0x14
#pragma pack(pop)
