#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialPermuterLoadingPriority : uint8_t {
    VeryLow = 0,
    Low = 1,
    Normal = 2,
    AboveNormal = 3,
    High = 4,
    Critical = 5,
    EMaterialPermuterLoadingPriority_MAX = 6,
};
#pragma pack(pop)
