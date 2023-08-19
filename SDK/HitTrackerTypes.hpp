#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class HitTrackerTypes : uint8_t {
    Irrelevant = 0,
    NonConsecutiveDifferent = 1,
    NonConsecutiveSame = 2,
    ConsecutiveSame = 3,
    ConsecutiveDifferent = 4,
    HitTrackerTypes_MAX = 5,
};
#pragma pack(pop)
