#pragma once
#include <cstdint>
#include "EDateTimeMonth.hpp"
#include "EHourAmPm.hpp"
#pragma pack(push, 1)
struct FDateTimeInput {
    EDateTimeMonth Month; // 0x0
    char pad_1[0x3];
    int32_t Day; // 0x4
    int32_t Year; // 0x8
    int32_t Hour; // 0xc
    EHourAmPm AmPm; // 0x10
    char pad_11[0x3];
    int32_t Minute; // 0x14
}; // Size: 0x18
#pragma pack(pop)
