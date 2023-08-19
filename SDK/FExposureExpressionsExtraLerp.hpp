#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FExposureExpressionsExtraLerp {
    char pad_0[0x8];
    FName Name; // 0x8
    float Value; // 0x10
    int32_t Targets; // 0x14
}; // Size: 0x18
#pragma pack(pop)
