#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECSGOperation : uint8_t {
    DifferenceAB = 0,
    DifferenceBA = 1,
    Intersect = 2,
    Union = 3,
    TrimA = 4,
    TrimB = 5,
    ECSGOperation_MAX = 6,
};
#pragma pack(pop)
