#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWorldEventTimeSpan {
    int32_t Days; // 0x0
    int32_t Hours; // 0x4
    int32_t Minutes; // 0x8
    int32_t Seconds; // 0xc
}; // Size: 0x10
#pragma pack(pop)
