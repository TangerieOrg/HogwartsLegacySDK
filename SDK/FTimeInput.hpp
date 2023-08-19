#pragma once
#include <cstdint>
#include "EHourAmPm.hpp"
#pragma pack(push, 1)
struct FTimeInput {
    int32_t Hour; // 0x0
    int32_t Minute; // 0x4
    EHourAmPm AmPm; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
