#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNoiseImage {
    TArray<float> NoiseData; // 0x0
    int32_t Width; // 0x10
    int32_t Height; // 0x14
    float Min; // 0x18
    float Max; // 0x1c
    float InverseDynamicRange; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
