#pragma once
#include <cstdint>
#include "EQuartzCommandQuantization.hpp"
#include "EQuarztQuantizationReference.hpp"
#pragma pack(push, 1)
struct FQuartzQuantizationBoundary {
    EQuartzCommandQuantization Quantization; // 0x0
    char pad_1[0x3];
    float Multiplier; // 0x4
    EQuarztQuantizationReference CountingReferencePoint; // 0x8
    bool bFireOnClockStart; // 0x9
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
