#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXCompare : uint8_t {
    Equal = 0,
    NotEqual = 1,
    GreatherThan = 2,
    GreaterThanEqual = 3,
    LessThan = 4,
    LessThanEqual = 5,
    EMultiFXCompare_MAX = 6,
};
#pragma pack(pop)
