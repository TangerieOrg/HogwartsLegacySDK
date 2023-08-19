#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUINavigation : uint8_t {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    Next = 4,
    Previous = 5,
    Num = 6,
    Invalid = 7,
    EUINavigation_MAX = 8,
};
#pragma pack(pop)
