#pragma once
#include <cstdint>
#include "EEasingFunc\Type.hpp"
#pragma pack(push, 1)
struct FEasingFunction {
    EEasingFunc::Type Easing; // 0x0
    char pad_1[0x3];
    float BlendExp; // 0x4
    int32_t Steps; // 0x8
}; // Size: 0xc
#pragma pack(pop)
