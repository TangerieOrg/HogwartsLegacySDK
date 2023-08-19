#pragma once
#include <cstdint>
#include "EObjectFadeDirection.hpp"
#include "FEasingFunction.hpp"
#pragma pack(push, 1)
struct FObjectFadeParamsEaseFunction {
    EObjectFadeDirection Direction; // 0x0
    char pad_1[0x3];
    float Duration; // 0x4
    FEasingFunction EaseFunction; // 0x8
}; // Size: 0x14
#pragma pack(pop)
