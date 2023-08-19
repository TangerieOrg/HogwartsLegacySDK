#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAdjustedValueMode : uint8_t {
    NoChange = 0,
    Set = 1,
    Multiply = 2,
    Add = 3,
    Subtract = 4,
    Divide = 5,
    Percent = 6,
    ClampOriginal = 7,
    EAdjustedValueMode_MAX = 8,
};
#pragma pack(pop)
