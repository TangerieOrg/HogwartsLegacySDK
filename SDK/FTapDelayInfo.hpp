#pragma once
#include <cstdint>
#include "ETapLineMode.hpp"
#pragma pack(push, 1)
struct FTapDelayInfo {
    ETapLineMode TapLineMode; // 0x0
    char pad_1[0x3];
    float DelayLength; // 0x4
    float Gain; // 0x8
    int32_t OutputChannel; // 0xc
    float PanInDegrees; // 0x10
    int32_t TapId; // 0x14
}; // Size: 0x18
#pragma pack(pop)
