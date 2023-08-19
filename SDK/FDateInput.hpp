#pragma once
#include <cstdint>
#include "EDateTimeMonth.hpp"
#pragma pack(push, 1)
struct FDateInput {
    EDateTimeMonth Month; // 0x0
    char pad_1[0x3];
    int32_t Day; // 0x4
    int32_t Year; // 0x8
}; // Size: 0xc
#pragma pack(pop)
