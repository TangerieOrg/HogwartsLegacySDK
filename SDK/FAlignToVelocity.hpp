#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAlignToVelocity {
    bool bInstantAlign; // 0x0
    char pad_1[0x3];
    float AlignmentSpeed; // 0x4
    float AlignmentSpeedScaleVelocity; // 0x8
    bool bScaleAlignToVelocity; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
