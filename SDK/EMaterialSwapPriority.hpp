#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialSwapPriority : uint8_t {
    AlwaysInterrupt = 0,
    VeryLow = 1,
    Low = 2,
    Normal = 3,
    Important = 4,
    VeryImportant = 5,
    NeverInterrupt = 6,
    Fundamental = 7,
    EMaterialSwapPriority_MAX = 8,
};
#pragma pack(pop)
