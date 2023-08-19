#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FGaussianSumBloomSettings {
    float Intensity; // 0x0
    float Threshold; // 0x4
    float Cross; // 0x8
    float SizeScale; // 0xc
    float Filter1Size; // 0x10
    float Filter2Size; // 0x14
    float Filter3Size; // 0x18
    float Filter4Size; // 0x1c
    float Filter5Size; // 0x20
    float Filter6Size; // 0x24
    FLinearColor Filter1Tint; // 0x28
    FLinearColor Filter2Tint; // 0x38
    FLinearColor Filter3Tint; // 0x48
    FLinearColor Filter4Tint; // 0x58
    FLinearColor Filter5Tint; // 0x68
    FLinearColor Filter6Tint; // 0x78
}; // Size: 0x88
#pragma pack(pop)
